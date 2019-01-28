//
//  Controller.hpp
//  ArrayVectorProject
//
//  Created by Davis, Lauren on 1/28/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
using namespace std;

class Controller
{
private:
    vector<int> intVector;
    vector<string> stringVector;
    
public:
    Controller();
    void start();
    void usingVector();
    void printingVector();
    void copyVectorToArray();
};


#endif /* Controller_hpp */
