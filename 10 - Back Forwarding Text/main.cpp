#include <iostream>
#include <string>

// This code reverses the word the user enters.

// Note: After that one i'm going to sleep

int main() {
    std::string word;

    std::cout << "Enter a word: ";
    std::cin >> word;

    for (int i = 0; i < word.size(); i++) {
        std::cout << word[(word.size() - 1 ) - i];
    }

    return 0;
}