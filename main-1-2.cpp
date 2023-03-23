#include <iostream>
#include "Person.h"

int main() {
    int n = 3;
    PersonList list = createPersonList(n);
    std::cout << "Number of people in list: " << list.numPeople << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i << ": name = " << list.people[i].name << ", age = " << list.people[i].age << std::endl;
    }
    delete[] list.people;
    return 0;
}