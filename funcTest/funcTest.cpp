//
//  funcTest.cpp
//  
//
//  Allows the user to test out functions. The makefile links everything that other modules in this project might use.
//
//

#include <iostream>
#include "hGraph/hGraph.h"
#include "graphics/graphUtil/graphingUtil.hpp"
#include "hamiltonians.h"
#include <algorithm>
#include <string>
#include <chrono>
#include <string>
#include <iomanip>
#include <fstream>
#include <chrono>




using namespace std;

bool getTF();



int main() {

    int size = 20;
    hGraph test(size);
    test = compGraph(size);
    test.setThreads(4);

    std::cout << test.getEulerChar() << std::endl;
    test.numCliques();



}

bool getTF() {
    while(true) {
        char c = getchar();
        if (toupper(c) == 'Y') {
            std::cin.clear();
            std::cin.ignore(100, '\n');
            return true;
            
        }
        else if(toupper(c) == 'N') {
            std::cin.clear();
            std::cin.ignore(100, '\n');
            return false;
            
        }
        else {
            std::cout << "Invalid input." << std::endl;
            std::cout << "Please enter a 'y' or an 'n': ";
            std::cin.clear();
            std::cin.ignore(100, '\n');
            
        }
    }
}
