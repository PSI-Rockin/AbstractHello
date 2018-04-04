#include <cstdio>
#include "abstractobject.hpp"
#include "alphabet.hpp"
#include "number.hpp"
#include "string.hpp"

AbstractObject::AbstractObject()
{

}

int main(int argc, char** argv)
{
    String helloWorld("HELLO WORLD");
    helloWorld.print();
    return Number(0).instanceof();
}
