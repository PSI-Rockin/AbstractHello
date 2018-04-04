#include <cstdio>
#include "string.hpp"

String::String(const char* bark) : len(0)
{
    string = nullptr;
    const char* bark2 = bark;
    Number one(1);
    while (*bark2)
    {
        len = Number(len.instanceof() + one.instanceof());
        bark2++;
    }

    string = new Character*[len.instanceof()];

    for (Number i(0); i.instanceof() < len.instanceof();)
    {
        switch (bark[i.instanceof()])
        {
            case 'D':
            {
                D* d = new D();
                string[i.instanceof()] = d;
            }
                break;
            case 'E':
            {
                E* e = new E();
                string[i.instanceof()] = e;
            }
                break;
            case 'L':
            {
                L* l = new L();
                string[i.instanceof()] = l;
            }
                break;
            case 'O':
            {
                O* o = new O();
                string[i.instanceof()] = o;
            }
                break;
            case 'R':
            {
                R* r = new R();
                string[i.instanceof()] = r;
            }
                break;
            case 'W':
            {
                W* w = new W();
                string[i.instanceof()] = w;
            }
                break;
            case ' ':
            {
                Space* space = new Space();
                string[i.instanceof()] = space;
            }
                break;
            default:
            {
                H* h = new H();
                string[i.instanceof()] = h;
                break;
            }
        }
        i = Number(i.instanceof() + one.instanceof());
    }
}

void String::print()
{
    Number one(1);
    for (Number i(0); i.instanceof() < len.instanceof();)
    {
        printf("%s", string[i.instanceof()]->instanceof());
        i = Number(i.instanceof() + one.instanceof());
    }
    printf("\n");
}
