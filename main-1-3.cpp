#include <iostream>
#include "Person.h"

int main() {
    int n = 3;
    PersonList origList = createPersonList(n);
    std::cout << "Original list:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i << ": name = " << origList.people[i].name << ", age = " << origList.people[i].age << std::endl;
    }
    PersonList newList = deepCopyPersonList(origList);
    std::cout << "New list:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i << ": name = " << newList.people[i].name << ", age = " << newList.people[i].age << std::endl;
    }
    delete[] origList.people;
    delete[] newList.people;
    return 0;
}