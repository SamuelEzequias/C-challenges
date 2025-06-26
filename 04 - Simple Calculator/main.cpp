#include <iostream>

// It's a simple calculator where you choose two numbers and a operator

int main() {
    // Create variables for values
    float value1, value2;
    // Create the character variable to the operator
    char op;

    // Writes and read
    std::cout << "Enter the first value: ";
    std::cin >> value1;

    std::cout << "Enter the operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter the second value: ";
    std::cin >> value2;

    // Checks the operator and writes the result
    if (op == '+') {
        float result = value1 + value2;
        std::cout << value1 << op << value2 << " = " << result;
    }
    else if (op == '-') {
        float result = value1 - value2;
        std::cout << value1 << op << value2 << " = " << result;
    }
    else if (op == '*') {
        float result = value1 * value2;
        std::cout << value1 << op << value2 << " = " << result;
    }
    else if (op == '/') {
        float result = value1 / value2;
        std::cout << value1 << op << value2 << " = " << result;
    }
    else {
        std::cout << "Operator '" << op << "' not available.";
    }

    return 0;
}