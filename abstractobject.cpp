#include <cstdio>
#include "abstractobject.hpp"
#include "alphabet.hpp"
#include "number.hpp"

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
    Character* blorp[Number(11).instanceof()];
    blorp[Number(0).instanceof()] = &h;
    blorp[Number(1).instanceof()] = &e;
    blorp[Number(2).instanceof()] = &l1;
    blorp[Number(3).instanceof()] = &l2;
    blorp[Number(4).instanceof()] = &o1;
    blorp[Number(5).instanceof()] = &space;
    blorp[Number(6).instanceof()] = &w;
    blorp[Number(7).instanceof()] = &o2;
    blorp[Number(8).instanceof()] = &r;
    blorp[Number(9).instanceof()] = &l3;
    blorp[Number(10).instanceof()] = &d;
    printf("%s", blorp[Number(0).instanceof()]->instanceof());
    printf("%s", blorp[Number(1).instanceof()]->instanceof());
    printf("%s", blorp[Number(2).instanceof()]->instanceof());
    printf("%s", blorp[Number(3).instanceof()]->instanceof());
    printf("%s", blorp[Number(4).instanceof()]->instanceof());
    printf("%s", blorp[Number(5).instanceof()]->instanceof());
    printf("%s", blorp[Number(6).instanceof()]->instanceof());
    printf("%s", blorp[Number(7).instanceof()]->instanceof());
    printf("%s", blorp[Number(8).instanceof()]->instanceof());
    printf("%s", blorp[Number(9).instanceof()]->instanceof());
    printf("%s", blorp[Number(10).instanceof()]->instanceof());
    printf("\n");
}
