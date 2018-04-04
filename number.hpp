#ifndef NUMBER_HPP
#define NUMBER_HPP
#include "abstractobject.hpp"
#include "digit.hpp"

class Number : public AbstractObject
{
    private:
        Digit* digits[32];
    public:
        Number(int number);

        int instanceof();
};

#endif // NUMBER_HPP
