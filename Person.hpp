//
//  Person.hpp
//  Øving 11
//
//  Created by Viroshaan Uthayamoorthy on 26/03/2019.
//  Copyright © 2019 Viroshaan Uthayamoorthy. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include "Replacement.hpp"
#include <set>
#include <list>

#endif /* Person_hpp */

class Person{
    std::string fornavn;
    std::string etternavn;
public:
    Person(std::string f,std::string e):fornavn{f},etternavn{e}{};
    std::string get_fornavn()const{return fornavn;}
    std::string get_etternavn()const{return etternavn;}
    friend std::ostream& operator <<(std::ostream& os, Person p){
        os << p.fornavn << " " << p.etternavn << std::endl;
        return os;
    }
};

void insertOrdered(std::list<Person> &l, const Person& p);
