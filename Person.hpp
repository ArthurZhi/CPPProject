//  Plant management
//
//  Person.hpp
//
//  Created by Arthur Zhilka; 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.


#ifndef Person_hpp
#define Person_hpp
#include <iostream>


class Person
{
public:
    Person(std::string first_name, std::string last_name, int s, int a); // constructor
    Person(std::string first_name, int a);
    std::string firstName;
    std::string lastName;
    int sex;
    unsigned int age;

    void display();
};


#endif /* Person_hpp */
