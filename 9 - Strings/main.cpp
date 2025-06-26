#include <iostream>
#include <string>

// This code asks the user for their name and greets him.

// Learning how to use strings in C++

int main() {
    // Creates a variable with text, nothing too much especial here.
    std::string creator_name = "Samuel";
    std::string name;
    
    // Writes the greeting and asks the user for their name
    std::cout << "Hi! My name is " << creator_name << ", what's yours? ";
    std::cin >> name;

    std::cout << "Nice to meet you " << name << "!";
    return 0;
}