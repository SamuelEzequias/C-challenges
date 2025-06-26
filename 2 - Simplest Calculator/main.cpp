#include <iostream>

int main() {
    // Creates variables
    float value1, value2;
    
    // Writes
    std::cout << "Type the first value: ";
    // User input first value
    std::cin >> value1;

    // Writes
    std::cout << "Type the second value: ";
    // User input second value
    std::cin >> value2;

    // Create Variables
    float addition = value1 + value2;
    float subtraction = value1 - value2;
    float multiplication = value1 * value2;
    float division = value1 / value2;

    // Show results
    std::cout << value1 << " + " << value2 << " = " << addition << std::endl;
    std::cout << value1 << " - " << value2 << " = " << subtraction << std::endl;
    std::cout << value1 << " * " << value2 << " = " << multiplication << std::endl;
    std::cout << value1 << " / " << value2 << " = " << division << std::endl;

    return 0;
}