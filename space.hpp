#ifndef SPACE_HPP
#define SPACE_HPP
#include "character.hpp"

class Space : public Character
{
    public:
        Space();

        const char* instanceof();
};

#endif // SPACE_HPP
