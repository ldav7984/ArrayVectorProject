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
    intVector.assign(5, 20); //5 ints with a value of 10
    stringVector = {"Hi", "this", "is", "my", "string", "vector."};
}

//std::vector<std::string> strVec = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

void Controller :: printingVector()
{
    std::cout << "The contents of the int vector are: ";
    for (std::vector<int>::iterator index = intVector.begin(); index != intVector.end(); index += 1)
    {
        std::cout << ' ' << *index;
        
    }
    std::cout << '\n';
    
    std::cout << "The contents of the string vector are: ";
    for (std::vector<string>::iterator index = stringVector.begin(); index != stringVector.end(); index += 1)
    {
        std::cout << ' ' << *index;
        
    }
    std::cout << '\n';
   
}

void Controller :: copyVectorToArray()
{
    string stringArray[6] = { };
    for (string word : stringVector)
    {
        int index = 0;
        string myWord;
        myWord = stringVector[index];
        stringArray[index]= myWord;
        index += 1;
    }
    
}

