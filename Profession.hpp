//  Plant management
//
//  Profession.hpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#ifndef Profession_hpp
#define Profession_hpp

#include <iostream>

struct Profession {
public:
    Profession(std::string n,float rate);
    std::string name;
    float baseRate;
    void display();
};

#endif /* Profession_hpp */
