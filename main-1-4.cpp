#include "Person.h"
#include <iostream>

int main() {
    PersonList pl;
    pl.numPeople = 3;
    pl.people = new Person[3];
    pl.people[0].name = "John";
    pl.people[0].age = 30;
    pl.people[1].name = "Alice";
    pl.people[1].age = 25;
    pl.people[2].name = "Bob";
    pl.people[2].age = 35;

    PersonList copy = shallowCopyPersonList(pl);

    std::cout << "Original list:\n";
    for (int i = 0; i < pl.numPeople; i++) {
        std::cout << "Name: " << pl.people[i].name << ", Age: " << pl.people[i].age << "\n";
    }

    std::cout << "Copied list:\n";
    for (int i = 0; i < copy.numPeople; i++) {
        std::cout << "Name: " << copy.people[i].name << ", Age: " << copy.people[i].age << "\n";
    }

    // Modify the original list
    pl.people[0].name = "David";

    std::cout << "Modified original list:\n";
    for (int i = 0; i < pl.numPeople; i++) {
        std::cout << "Name: " << pl.people[i].name << ", Age: " << pl.people[i].age << "\n";
    }

    std::cout << "Copied list after modifying original:\n";
    for (int i = 0; i < copy.numPeople; i++) {
        std::cout << "Name: " << copy.people[i].name << ", Age: " << copy.people[i].age << "\n";
    }

    // Free the memory
    delete[] pl.people;
    delete[] copy.people;

    return 0;
}
