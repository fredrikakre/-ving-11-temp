//
//  Person.cpp
//  Øving 11
//
//  Created by Viroshaan Uthayamoorthy on 26/03/2019.
//  Copyright © 2019 Viroshaan Uthayamoorthy. All rights reserved.
//

#include "Person.hpp"

void insertOrdered(std::list<Person> &l, const Person& p){
    for (std::list<Person>::iterator ptr = l.begin(); ptr != l.end();++ptr){
        if (ptr ->get_fornavn() > p.get_fornavn()){
            l.insert(ptr, p);
            return;
        }
    }
    l.push_back(p);
}
