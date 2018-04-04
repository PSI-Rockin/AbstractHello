#ifndef DIGIT_HPP
#define DIGIT_HPP
#include "abstractobject.hpp"

class Digit : public AbstractObject
{
    public:
        Digit();

        virtual int instanceof() = 0;
};

#endif // DIGIT_HPP
