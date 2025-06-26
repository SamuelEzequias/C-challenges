#include <iostream>

// Shows the multiplication tabble of a number

int main() {
    // Write and input value
    int value;
    std::cout << "Input a integer value: ";
    std::cin >> value;

    // Loops for every number in 1 to 10 and multiplicates it by the value variable
    for (int i = 1; i <= 10; i++) {
        int result = value * i;
        std::cout << value << " x " << i << " = " << result << std::endl;
    }
    return 0;
}