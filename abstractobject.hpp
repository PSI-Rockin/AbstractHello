#ifndef ABSTRACTOBJECT_HPP
#define ABSTRACTOBJECT_HPP

class AbstractObject
{
    public:
        AbstractObject();

        virtual const char* instanceof() = 0;
};

#endif // ABSTRACTOBJECT_HPP
