#include<stdio.h>
#include<stdlib.h>
#define _LEN_ 100

void createRand(int* ahead)
{
    for(int i = 0; i < _LEN_; i++)
    {
        ahead[i] = rand();
    }
}










int main()
{
    int a[_LEN_];
    createRand(a);
    for(int i = 0; i < _LEN_; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("-------------\n");
    createRand(a);
    for(int i = 0; i < _LEN_; i++)
    {
        printf("%d\n", a[i]);
    }
}

