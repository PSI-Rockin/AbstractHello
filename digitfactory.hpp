#ifndef DIGITFACTORY_HPP
#define DIGITFACTORY_HPP
#include "abstractobject.hpp"
#include "digit.hpp"
#include "digit0.hpp"
#include "digit1.hpp"

class DigitFactory : public AbstractObject
{
    public:
        DigitFactory();

        Digit0* createZero();
        Digit1* createOne();
};

#endif // DIGITFACTORY_HPP
