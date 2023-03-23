#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newPl;
    newPl.numPeople = pl.numPeople;
    newPl.people = new Person[newPl.numPeople];
    for (int i = 0; i < newPl.numPeople; i++) {
        newPl.people[i].name = pl.people[i].name;
        newPl.people[i].age = pl.people[i].age;
    }
    return newPl;
}