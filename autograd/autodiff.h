// autodiff.h
#pragma once

#include <iostream>
#include <functional>
#include <cmath>
#include <unordered_map>

template <typename T>
struct Node {
    T value;
    T gradient;
    std::function<T()> operation;
};

template <typename T>
class AutoDiff {
public:
    Node<T>* createNode(std::function<T()> operation);

    Node<T>* variable(T value);

    Node<T>* add(Node<T>* a, Node<T>* b);

    Node<T>* multiply(Node<T>* a, Node<T>* b);

    Node<T>* power(Node<T>* base, T exponent);

    T forwardPass(Node<T>* node);

    void backwardPass(Node<T>* node, T gradient = T(1));

    T getGradient(Node<T>* node);

private:
    std::unordered_map<int, Node<T>*> nodes;
    int currentId = 0;
};

#include "autodiff.tpp"  // Include the template implementation
