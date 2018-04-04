#include <cmath>
#include "number.hpp"
#include "digitfactory.hpp"

Number::Number(int number)
{
    DigitFactory digitFactory;
    for (int i = 31; i >= 0; i--)
    {
        //The true Java way: set everything to null pointers
        digits[i] = nullptr;
        if (i == 31)
        {
            if (number < 0)
            {
                number = -number;
                digits[i] = digitFactory.createOne();
            }
            else
                digits[i] = digitFactory.createZero();
        }
        else
        {
            if (number >= pow(2, i))
            {
                number -= pow(2, i);
                digits[i] = digitFactory.createOne();
            }
            else
                digits[i] = digitFactory.createZero();
        }
    }
}

int Number::instanceof()
{
    bool neg = false;
    int num = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (i == 31)
        {
            if (digits[i]->instanceof())
                neg = true;
        }
        else if (digits[i]->instanceof())
            num += pow(2, i);
    }
    if (neg)
        return -num;
    return num;
}
