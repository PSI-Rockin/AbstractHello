#ifndef STRING_HPP
#define STRING_HPP
#include "abstractobject.hpp"
#include "character.hpp"

class String : public AbstractObject
{
    private:
        Character** iLikeJava;
    public:
        String(const char* bark);
};

#endif // STRING_HPP
