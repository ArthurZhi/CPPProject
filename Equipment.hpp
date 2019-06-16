//  Plant management
//
//  Equipment.hpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#ifndef Equipment_hpp
#define Equipment_hpp

#include <iostream>

enum EquipCondition {
    perfect,
    satisfactory,
    bad
};

struct Equipment {
public:
    Equipment(std::string n, EquipCondition cond, float cst);
    std::string name;
    EquipCondition condition;
    float cost = 1.0;
    void display();
};

#endif /* Equipment_hpp */
