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
    O o1;
    Space space;
    W w;
    O o2;
    R r;
    L l3;
    D d;
    Character* blorp[11];
    blorp[0] = &h;
    blorp[1] = &e;
    blorp[2] = &l1;
    blorp[3] = &l2;
    blorp[4] = &o1;
    blorp[5] = &space;
    blorp[6] = &w;
    blorp[7] = &o2;
    blorp[8] = &r;
    blorp[9] = &l3;
    blorp[10] = &d;
    printf("%s", blorp[0]->instanceof());
    printf("%s", blorp[1]->instanceof());
    printf("%s", blorp[2]->instanceof());
    printf("%s", blorp[3]->instanceof());
    printf("%s", blorp[4]->instanceof());
    printf("%s", blorp[5]->instanceof());
    printf("%s", blorp[6]->instanceof());
    printf("%s", blorp[7]->instanceof());
    printf("%s", blorp[8]->instanceof());
    printf("%s", blorp[9]->instanceof());
    printf("%s", blorp[10]->instanceof());
    printf("\n");
}
