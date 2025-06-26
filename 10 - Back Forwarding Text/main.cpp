#include <iostream>
#include <string>

// This code reverses the word the user enters.

// Note: After that one i'm going to sleep

int main() {
    // Creates the word string
    std::string word;

    // Makes the user enter a word
    std::cout << "Enter a word: ";
    std::cin >> word;

    // Creates a loop for every letter in the string
    for (int i = 0; i < word.size(); i++) {
        // It starts to write the text in the end, and by subtracting the index "i", it gets backwards.
        std::cout << word[(word.size() - 1) - i];
    }

    // Ends the program
    return 0;
}