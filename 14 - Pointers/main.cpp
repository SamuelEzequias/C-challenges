#include <iostream>

// This code shows the user the memory address of a variable

// Note: I'm a bit scared about that pointer thing
int main() {
    /*
    & gets the address from a variable
    * gets value from a address

    That's what I understood
    */

    // It's a simple value variable
    int value = 10;

    // It's a integer pointer of the value variable, it have the memory address of the 'value' variable.
    // Example: 0x61ff0c
    int* pointer = &value;

    // The *pointer gets the value stored at the memory address.
    // Example: 0x61ff0c address have the value of 10
    std::cout << "The value of the variable pointed is: " << *pointer << std::endl;

    // This simply shows the memory address that the pointer is holding.
    std::cout << "The memory address of the variable is: " << pointer << std::endl;

    // The &pointer shows the address of the pointer itself, it's a bit tricky.
    std::cout << "The memory address of the pointer is: " << &pointer << std::endl;

    // Ends the function
    return 0;
}