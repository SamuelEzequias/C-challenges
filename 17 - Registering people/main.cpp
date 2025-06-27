#include <iostream>

// This code register 3 people. Unlike the other, this one use a public struct

// Creates a struct called person, that has name, age and height.
struct Person {
    std::string name;
    int age;
    float height;
};

int main() {
    // Creates 3 structs of users
    Person user1;
    Person user2;
    Person user3;

    // Hey, it's me again!
    user1.age = 15;
    user1.name = "Samuel";
    user1.height = 1.75;

    // Random person
    user2.age = 70;
    user2.name = "Bob";
    user2.height = 0.60; // Yes, he is a gnome

    // Another random person
    user3.age = 25;
    user3.name = "Mario";
    user3.height = 1.55;

    // Writes the name, age and height of the users
    std::cout << user1.name << " is " << user1.age << " years old and is " << user1.height << "m height." << std::endl;
    std::cout << user2.name << " is " << user2.age << " years old and is " << user2.height << "m height." << std::endl;
    std::cout << user3.name << " is " << user3.age << " years old and is " << user3.height << "m height." << std::endl;

    // Ends the function
    return 0;

    // This code has nothing much special, it's just a bigger version of the last one.
    // Note: I'm gonna sleep now, tomorrow i'll do more.
}