#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include "Replacement.hpp"
#include <set>
#include "Person.hpp"


int main(int argc, const char * argv[]) {
    Person Jeff{"Jeff","Malone"};
    Person Jess{"Jess","Pearson"};
    Person Tom{"Tom","Hola"};
    Person Viro{"Viro","Uthaya"};
    std::list<Person> personlist;
    insertOrdered(personlist, Jess);
    insertOrdered(personlist, Jeff);
    insertOrdered(personlist, Tom);
    insertOrdered(personlist, Viro);
    for (std::list<Person>::iterator ptr = personlist.begin(); ptr != personlist.end();++ptr){
        std::cout << *ptr;
    }
}
