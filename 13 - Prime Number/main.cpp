#include <iostream>

// This code has a function that says if the number entered is prime or not

// Note: Finally Portugol helped with something
bool get_prime(int input_number) {
    // Creates a variable that stores the number os dividers
    int dividers = 0;

    // Make a loop of 1 to the number that the user choose
    for (int i = 1; i <= input_number; i++) {
        // If the number is divisible by i, than the dividers variable is added by 1
        if (input_number%i == 0) {
            dividers += 1;
        }
    }
    // If the number of dividers is equal to two, than it's a prime number and returns true
    if (dividers == 2) {
        return true;
    }

    // If the number of dividers is not equal to two, than it skips the if and go straight to this return False
    return false;
}

int main() {
    // Creates a number variable and stores it's, same as the others codes
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // If the get_prime function is equal to true, than it writes that the number is prime, if not, writes that the number is not prime
    if (get_prime(number) == true) {
        std::cout << "The number is prime" << std::endl;
    }
    else {
        std::cout << "The number isn't prime" << std::endl;
    }

    return 0;
}

// Note: That one was pretty easy to do, wow