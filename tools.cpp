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

//method to get a particular byte of an int
unsigned char getdigits(int num,int digits)
{
    return num >> (8 * (digits -1));
}
