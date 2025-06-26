#include <iostream>

// Enter 5 values, shows the largest, smallest and the arithmetic mean
// Note: That one was hard to do

int main() {

    // Write to the user type 5 values
    std::cout << "Enter 5 values: " << std::endl;

    // Creates a array with 5 of lenght
    int numbers[5];

    // Make the user write 5 values
    for (int i = 0; i < 5; i++) {
        // The value variable
        int value;
        
        // User input the value
        std::cout << "Enter value " << i << ": ";
        std::cin >> value;
        
        // Put the value into the "i" index in numbers
        numbers[i] = value;
    }

    // Create one variable for the largest, smallest and for the sum
    int largest_number = numbers[0];
    int smallest_number = numbers[0];
    float sum = 0;

    // Passes through all the numbers in the numbers array
    for (int i = 0; i < 5; i++) {
        // If the current index of numbers is greater than the actual lasgest number, then the lasgest number variable turn into the current index of numbers.
        if (numbers[i] > largest_number) {
            largest_number = numbers[i];
        } 
        // If the current index of numbers is lower than the actual smallest number, then the smallest number turn into the current index of numbers.
        if (numbers[i] < smallest_number) {
            smallest_number = numbers[i];
        }
        // Adds the current numbers index to the sum variable.
        sum += numbers[i];
    }

    // Calculates the average
    // average = sum of all values / number of values
    float average = sum / 5;

    // Outputs the final results
    std::cout << "The largest number is: " << largest_number << std::endl;
    std::cout << "The smallest number is: " << smallest_number << std::endl;
    std::cout << "The avarage is: " << average << std::endl;

    // Ends the program.
    return 0;

    // Note: I'm sleepy.
}