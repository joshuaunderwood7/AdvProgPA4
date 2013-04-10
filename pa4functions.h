#ifndef PA2FUNCTIONS
#define PA2FUNCTIONS

#include <cstdlib>

namespace Underwood
{
    bool READPEOPLEFILE(std::string filename, Hash &target);
    bool CALCULATEDUES(std::string filename, Hash &target);
    bool GREETING(void);
    bool ENTER_TO_CONTINUE(void);
}



#endif
