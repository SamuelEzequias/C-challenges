#include <iostream>

// This code has the function "calc_factorial" which calculates the factorial of the number you pass

/*
To calculate a factorial number is very simple, you just multiply the number you choose for every number bellow them higher than zero
Example: 6! =  6 * 5 * 4 * 3 * 2 * 1 = 720
*/

int calc_factorial(int input_number) {
    // Creates a variable to store the result_number
    int result_number = input_number;

    // If the number is 0, then the factorial of it is 1
    if (input_number == 0) {
        return 1;
    }

    // Multiplies the result number by i, which i is all numbers bellow the number you choose - 1 and higher than 0
    for (int i = input_number - 1; i > 0; i--) {
        result_number *= i;
    }

    // Returns the number
    return result_number;
}

int main () {
    // Creates a variable called number, which stores the number that the user inputs
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Creates a variable called 'factorial' to store the factorial of the number that the user inputed
    int factorial = calc_factorial(number);
    std::cout << "The result of the factorial is: " << factorial << std::endl;
    return 0;
}