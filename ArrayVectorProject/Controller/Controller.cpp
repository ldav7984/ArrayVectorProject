//
//  Controller.cpp
//  ArrayVectorProject
//
//  Created by Davis, Lauren on 1/28/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#include "Controller.hpp"
#include <vector>

Controller :: Controller()
{
    std::vector<int> intVector;
    std::vector<string> stringVector;
}

void Controller :: start()
{
    usingVector();
    printingVector();
    copyVectorToArray();
    cout << "This is my vector and array project." << endl;
}

void Controller :: usingVector()
{
    
}

void Controller :: printingVector()
{
    std::cout << "The contents of the vector are: ";
    for (std::vector<int>::iterator index = intVector.begin(); index != intVector.end(); index += 1)
    {
        std::cout << ' ' << * index;
        
    }
    std::cout << '\n';
    
    for (std::vector<string>::iterator index = stringVector.begin(); index != stringVector.end(); index += 1)
    {
        std::cout << ' ' << * index;
        
    }
    std::cout << '\n';
   
}

void Controller :: copyVectorToArray()
{
    
}

