#include <iostream>

// This code have a struct called Person, with name, age and height

// Note: I'm still traumatized by the pointer thing
int main() {
    // Creates a struct variable called Person, which has name, age and height.
    struct {
        std::string name;
        int age;
        float height;
    } Person;

    // Hey, that's me!
    Person.name = "Samuel";
    Person.age = 15;
    Person.height = 1.75;

    // Writes the name, age and height
    std::cout << "Your name is: " << Person.name << std::endl;
    std::cout << "Your age is: " << Person.age << std::endl;
    std::cout << "Your height is: " << Person.height << std::endl;

    // Ends the function
    return 0;

    // Note: That is actually pretty easy, i hope it keeps this way. And i'm sleepy again.
}