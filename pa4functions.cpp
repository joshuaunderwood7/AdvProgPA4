//    pa4functions.cpp
//    written by Joshua Underwood
//    for Programming assignment 4
//    CSCI 3320
//
//    Standard functions used by PA4

#include "pa4functions.h"
#include <cstdio>
#include <iostream>

namespace Underwood
{


bool GREETING(void)
{
    std::cout << "Greetings user." << std::endl
              << "This program was made for CSCI 3320 "
              << "Program Assignment 4 Spring 2013:" << std::endl
              << "By: Joshua Underwood"
              << std::endl << std::endl;
    return true;
}


bool ENTER_TO_CONTINUE(void)
{
    std::cout << "Press ENTER to continue.\n"; std::getchar();
    return true;   
}

}
