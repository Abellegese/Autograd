// main.cpp
#include "autodiff.h"

int main() {
    AutoDiff<double> autoDiff;

    // Create input nodes
    Node<double>* x = autoDiff.variable(2.0);
    Node<double>* y = autoDiff.variable(3.0);

    // Build the computation graph for the expression: f(x, y) = 2x^2 + 3y
    Node<double>* term1 = autoDiff.power(x, 2.0);
    Node<double>* term2 = autoDiff.multiply(autoDiff.variable(2.0), term1);
    Node<double>* term3 = autoDiff.multiply(autoDiff.variable(3.0), y);
    Node<double>* result = autoDiff.add(term2, term3);

    // Perform a forward pass to compute the value of the expression
    double functionValue = autoDiff.forwardPass(result);
    std::cout << "Function value: " << functionValue << std::endl;

    // Perform a backward pass to compute gradients
    autoDiff.backwardPass(result);

    // Access the gradients of the input nodes
    double gradientX = autoDiff.getGradient(x);
    double gradientY = autoDiff.getGradient(y);

    std::cout << "Gradient with respect to x: " << gradientX << std::endl;
    std::cout << "Gradient with respect to y: " << gradientY << std::endl;

    return 0;
}
