#ifndef STRING_HPP
#define STRING_HPP
#include "abstractobject.hpp"
#include "alphabet.hpp"
#include "number.hpp"

class String : public AbstractObject
{
    private:
        Character** string;
        Number len;
    public:
        String(const char* bark);

        void print();
};

#endif // STRING_HPP
