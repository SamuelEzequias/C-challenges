#include <iostream>

// Writes the numbers from 1 to 100

int main() {
    // for i = 1 and i <= 100, i += 1
    for (int i = 1; i <= 100; i++) {
        if (i != 100) {
            std::cout << i << ", ";
        }
        else {
            std::cout << i;
        }
    }
    
    return 0;
}