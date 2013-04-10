//    pa4functions.h
//    written by Joshua Underwood
//    for Programming assignment 4
//    CSCI 3320
//
//    Standard functions used by PA4

#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>
#include "hash.h"
#include <vector>

namespace Underwood
{

bool READPEOPLEFILE(std::string filename, Hash &target)
{
    Underwood::Hash temp;
    std::iftream infile (filename);
    if(infile.isopen())
    {
        while(infile.good())
        {
            infile >> temp.name;
            double hours[12];
            for(int i = 0; i < 12; ++i)
            {
                infile >> hours[i];
            }
            temp.setHours(hours);
            target.set(temp.name, temp);
        }
        infile.close();
    }
    else
    { return false; }
    return true;
}

bool CALCULATEDUES(std::string filename, Hash &target)
{
    Underwood::Hash temp;
    std::iftream infile (filename);
    if(infile.isopen())
    {
        double v; 
        std::vector<double> slope;
        while(infile.good())
        {
            for(int i = 0; i < 12; ++i) infile >> v;
            for(int i = 0; i < 12; ++i)
            {
                infile >> v;
                slope.push_back(v);
                slope.push_back(v);
            }

        }
        infile.close();
        for (int i = 0; i < slope.size()-1; i++) 
        {
            slope[i] = (slope[i] + slope[i+1])/2;
        }

        std::vector<string> keys = target.getKeys();
        for (int i = 0; i < keys.size(); i++) 
        {
            double dues[12];
            for(int j = 0; j < 12; ++j)
            {
                dues[j] = slope[target[keys[i]].monthly_hours[j]];
            }
            target[keys[i]].setDues(dues);
        }
        
    }
    else
    { return false; }
    return true;
}


bool underwood::GREETING(void)
{
    std::cout << "Greetings user." << std::endl
              << "This program was made for CSCI 3320 "
              << "Program Assignment 4 Spring 2013:" << std::endl
              << "By: Joshua Underwood"
              << std::endl << std::endl;
    return true;
}


bool underwood::ENTER_TO_CONTINUE(void)
{
    std::cout << "Press ENTER to continue.\n"; std::getchar();
    return true;   
}

}
