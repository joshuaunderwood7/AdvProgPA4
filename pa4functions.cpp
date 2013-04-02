#include <cstdio>
#include <iostream>


bool underwood::GREETING(void)
{
    std::cout << "Greetings user." << std::endl
              << "This program was made for CSCI 3320 Program Assignment 3 Spring 2013:"
              << "By: Joshua Underwood"
              << std::endl << std::endl;
    return true;
}


bool underwood::ENTER_TO_CONTINUE(void)
{
    std::cout << "Press ENTER to continue.\n"; std::getchar();
    return true;   
}


