#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "abstractobject.hpp"

class Character : public AbstractObject
{
    public:
        Character();

        virtual const char* instanceof() = 0;

        //bool equals(Character* bark);
};

#endif // CHARACTER_HPP
