//    hash.h
//    written by Joshua Underwood
//    for Programming assignment 4
//    CSCI 3320
//
//    This class will be used to hold elements into a hash table.
//    the ideal situation would be that the records can be accessed in 
//    a near O(1) speed.  The records will be read in from a file, 
//    and should be able to be displayed in a tabular form.
#ifndef UNDERWOOD_HASH_
#define UNDERWOOD_HASH_
#include <iostream>

namespace Underwood
{

//forward decl for friend function
template <typename Key, typename Value> Value& operator [] (const &Hash input);
std::ostream operator << (std::ostream& out , const &Hash<Key,Value> input);

template <typename Key, typename Value>
class Hash
{
   public:
    Hash();
    Hash(unsigned long input); //initialized Hash table to be of certain size;
    ~Hash();

    Value get(const Key& input);
    bool set(const Key& input_key, const Value& input_value);

    unsigned long hash(const Key& input);
   
    //operators 
    //
    // pre: element at [location] is present
    // post: returns element at [location]. segmentation fault otherwise
    //       (may throw exception at later date, will revise this comment)
    friend Value& operator [] (const &Hash input);
    // post: displays Hash table in tabular form.
    friend std::ostream operator << (std::ostream& out , const &Hash<Key,Value> input);

   private:
    Value list[];
    bool exists[];
    unsigned long max_size, used;

    //pre: internal use only to replace the list[] with a larger container.
    //post: replaces the list[] with a larger container and properly
    //      destructs the old one. returns FALSE if error, returns TRUE
    //      otherwise.
    bool long grow_list(void);
    //pre: internal use only to calculate how "full" the hash table is.
    //post: returns integer representation of the "fullness" of hash table.
    unsigned long percent_full(void);

    //pre: victim is a sparcely filled array.
    //post: array is destructed
    bool destruct_list(Value* victim);

    //pre: element has a "deleted" boolean member
    //post: removes elements marked for deletion
    bool clean(void); 
}

}

#include "hash.tem"
#endif
