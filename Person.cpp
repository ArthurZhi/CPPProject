//  Plant management
//
//  Person.cpp
//
//  Created by Arthur Zhilka on 29/05/2019.
//
//  Copyright © 2019 ArtZhi. All rights reserved.

#include "Person.hpp"

Person :: Person(std::string first_name, std::string last_name, int s, int a)
{
    firstName = first_name;
    lastName = last_name;
    sex = s;
    age = a;
}

Person :: Person(std::string first_name, int a)
{
    firstName = first_name;
    age = a;
}

void Person :: display()
{
    std::cout << "FirstName: " << firstName << "LastName: " << lastName <<"\tAge: " << age << std::endl;
}
