#include<iostream>
#include "array.h"
#include "tools.h"
#include "heapsort.h"
#define NUM 100000
int main()
{
    int arr[NUM] = {0};
    Array a;
    a.head = arr;
    a.length = NUM;
    createRand(a, a.length);
    heapsort(a);
    for (int i = 1; i <= NUM; ++i) {
    std::cout << a[i]<< std::endl;
    }
}
