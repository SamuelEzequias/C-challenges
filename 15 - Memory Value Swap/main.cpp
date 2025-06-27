#include <iostream>

// This code swaps values of two variables using pointers

// Note: That one was tricky
int main() {
    /*
    I was almost rage quitting. I think it's a canon event for anyone learning C++.
    I was doing this before:

    *pointer1 = *pointer2;
    *pointer2 = *pointer1;
    
    But the output was:

    The first value is: 20
    The second value is: 20

    This was happening because when i changed the first pointer to the second the first pointer became 20
    and when i tried to change the second by the first, the first was already 20, so nothing happened.
    */

    // Creates two variables, value1 which is 10 and value2 which is 20.
    int value1 = 10;
    int value2 = 20;

    // Creates two pointers, pointer1 pointing to value1 and pointer2 pointing to value2
    int* pointer1 = &value1;
    int* pointer2 = &value2;

    // Creates a temp variable to store the pointer1 value
    int temp = *pointer1;
    // Changes the pointer1 value to pointer2 value
    *pointer1 = *pointer2;
    // Changes the pointer2 value to the pointer1 previous value which is stored in the temp variable
    *pointer2 = temp;

    // Writes the first and second value, nothing new here.
    std::cout << "The first value is: " << value1 << std::endl;
    std::cout << "The second value is: " << value2 << std::endl;

    // End the function.
    return 0;
}