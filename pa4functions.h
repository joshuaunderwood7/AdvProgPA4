#ifndef PA4FUNCTIONS
#define PA4FUNCTIONS

#include <cstdlib>
#include <string>
#include "hash.h"

namespace Underwood
{
    template <typename Key, typename Value>
    bool READPEOPLEFILE(std::string filename, Hash<Key, Value> &target);

    template <typename Key, typename Value>
    bool CALCULATEDUES(std::string filename, Hash<Key, Value> &target);
    
    bool GREETING(void);
    bool ENTER_TO_CONTINUE(void);
}

#include "pa4functions.tem"


#endif
