#include "digitfactory.hpp"

DigitFactory::DigitFactory()
{

}

Digit0* DigitFactory::createZero()
{
    return new Digit0();
}

Digit1* DigitFactory::createOne()
{
    return new Digit1();
}
