#include <iostream>

int main() {
    // Creates the "age" variable
    int age;

    // Writes and get the user input
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Checks if age is greater than 18
    if (age > 18) {
        std::cout << "You're over 18 years old";
    } 
    // If not, then
    else {
        std::cout << "You're under 18 years old";
    }
}