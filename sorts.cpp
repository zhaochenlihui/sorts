#include<iostream>
#include <stdlib.h>
#include "array.h"
#include "tools.h"
#include "heapsort.h"
#include "quicksort.h"
int main(int argc, char *argv[])
{
    int num;
    Array a;
    if(argc == 2){
        num = atoi(argv[1]);
        int *arr = new int[num];
        a.head = arr;
        a.length = num;     
    }else{
        num = 100;
        int arr[100] = {0};
        a.head = arr;
        a.length = 100;
    }

    createRand(a, a.length);
    quicksort(a, 1, a.length); 
    for (int i = 1; i <= num; ++i) {
    std::cout << a[i]<< std::endl;
    }
    
    std::cout << "--------------------" << std::endl;
     
    createRand(a, a.length);
    heapsort(a);
    for (int i = 1; i <= num; ++i) {
    std::cout << a[i]<< std::endl;
    }
    
    return 0;
}


