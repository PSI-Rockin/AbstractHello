#include <cstdio>
#include "abstractobject.hpp"
#include "alphabet.hpp"

AbstractObject::AbstractObject()
{

}

int main(int argc, char** argv)
{
    H h;
    E e;
    L l1, l2;
    Character* blorp[5];
    blorp[0] = &h;
    blorp[1] = &e;
    blorp[2] = &l1;
    blorp[3] = &l2;
    printf("%s", blorp[0]->instanceof());
    printf("%s", blorp[1]->instanceof());
    printf("%s", blorp[2]->instanceof());
    printf("%s", blorp[3]->instanceof());
    printf("\n");
}
