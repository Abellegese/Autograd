// autodiff.tpp
template <typename T>
Node<T>* AutoDiff<T>::createNode(std::function<T()> operation) {
    Node<T>* node = new Node<T>{T(0), T(0), operation};
    nodes[currentId++] = node;
    return node;
}

template <typename T>
Node<T>* AutoDiff<T>::variable(T value) {
    return createNode([value]() { return value; });
}

template <typename T>
Node<T>* AutoDiff<T>::add(Node<T>* a, Node<T>* b) {
    return createNode([a, b]() { return a->value + b->value; });
}

template <typename T>
Node<T>* AutoDiff<T>::multiply(Node<T>* a, Node<T>* b) {
    return createNode([a, b]() { return a->value * b->value; });
}

template <typename T>
Node<T>* AutoDiff<T>::power(Node<T>* base, T exponent) {
    return createNode([base, exponent]() { return std::pow(base->value, exponent); });
}

template <typename T>
T AutoDiff<T>::forwardPass(Node<T>* node) {
    if (node->value != T(0)) {
        return node->value;
    }

    node->value = node->operation();
    return node->value;
}

template <typename T>
void AutoDiff<T>::backwardPass(Node<T>* node, T gradient) {
    node->gradient += gradient;

    if (node->gradient != T(0)) {
        for (Node<T>* child : node->children) {
            T childGradient = node->gradient * child->operation();
            backwardPass(child, childGradient);
        }
    }
}

template <typename T>
T AutoDiff<T>::getGradient(Node<T>* node) {
    return node->gradient;
}
