//    pa4.cpp
//    written by Joshua Underwood
//    for Programming assignment 4
//    CSCI 3320
#include <iostream>
#include "hash.h"
#include "pa4functions.h"
#include <fstream>
#include <string>

using namespace Underwood;

int main(int argc, const char *argv[])
{
    if(argc != 4)
    {
        std::cerr << "Incorrect number of input arguments.\n"
            << "call with:\n"
            << "pa4 [name file] [time-sheet file] [output file]\n";
        return 1;
    }

    Hash<std::string, members> theTable;
    std::string filename;

    GREETING();
    filename = std::string(argv[1]);
    READPEOPLEFILE(filename, theTable);
    filename = std::string(argv[2]);
    CALCULATEDUES(filename, theTable);

    std::ofstream ofile(argv[3]);
    ofile << theTable;
    ofile.close();
    
    std::cout << theTable;
    return 0;
}

