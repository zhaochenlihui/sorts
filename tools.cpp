#include "tools.h"



void createRand(Array ahead, int length)
{
    for(int i = 1; i <= length; i++)
    {
        ahead[i] = rand();
    }
}

void exchange(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}
