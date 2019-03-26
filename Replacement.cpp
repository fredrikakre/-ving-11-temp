//
//  Replacement.cpp
//  Øving 11
//
//  Created by Viroshaan Uthayamoorthy on 25/03/2019.
//  Copyright © 2019 Viroshaan Uthayamoorthy. All rights reserved.
//

#include "Replacement.hpp"

std::vector<std::string>& replacement(std::vector<std::string>& vec, std::string old, std::string replace){
    for (std::vector<std::string>::iterator ptr = vec.begin();ptr < vec.end();++ptr){
        if (*ptr == old){
            vec.erase(ptr);
            vec.insert(ptr, replace);
        }
    }
    return vec;
}

std::set<std::string>& replacement2(std::set<std::string>& vec, std::string old, std::string replace){
    for (std::set<std::string>::iterator ptr = vec.begin();ptr != vec.end();++ptr){
        if (*ptr == old){
            vec.erase(ptr);
            vec.insert(ptr, replace);
        }
    }
    return vec;
}

void oppgave_en(){
    std::vector<std::string> wow;
    wow.push_back("Jeff");
    wow.push_back("Lorem");
    wow.push_back("Ipsum");
    wow.push_back("Wow");
    for (std::vector<std::string>::iterator ptr = wow.begin();ptr < wow.end();++ptr){
        std::cout << *ptr << std::endl;
    }
    std:: cout << std::endl;
    
    std::reverse_iterator<std::vector<std::string>::iterator> k;
    for (k = wow.rbegin(); k < wow.rend();++k){
        std::cout << *k << std::endl;
    }
    
    std:: cout << std::endl;
    
    replacement(wow, "Jeff", "Derp");
    for (std::vector<std::string>::iterator ptr = wow.begin();ptr < wow.end();++ptr){
        std::cout << *ptr << std::endl;
    }
    std:: cout << std::endl;
    
    std::set<std::string> wow2;
    wow2.insert("Jeff");
    wow2.insert("Bezos");
    std::set<std::string>::iterator ptr;
    for (ptr = wow2.begin(); ptr != wow2.end(); ++ptr){
        std::cout << *ptr << std::endl;
    }
    std:: cout << std::endl;
    
    std::reverse_iterator<std::set<std::string>::iterator> kk;
    for (kk = wow2.rbegin(); kk != wow2.rend();++kk){
        std::cout << *kk << std::endl;
    }
    std:: cout << std::endl;
    replacement2(wow2, "Jeff", "Amazon");
    for (ptr = wow2.begin(); ptr != wow2.end(); ++ptr){
        std::cout << *ptr << std::endl;
    }
}
