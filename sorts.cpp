#include<iostream>
#include <stdlib.h>
#include <time.h>
#include "array.h"
#include "tools.h"
#include "heapsort.h"
#include "quicksort.h"
int main(int argc, char *argv[])
{
    int num;
    Array a;

    clock_t t_start, t_end;
    
    if(argc == 2){
        num = atoi(argv[1]);
        int *arr = new int[num];
        a.head = arr;
        a.length = num;     
    }else{
        num = 10000;
        int *arr = new int[num];
        a.head = arr;
        a.length = num;
    }

    createRand(a, a.length);
    t_start = clock();
    quicksort(a, 1, a.length); 
    t_end = clock(); 
    std::cout << "quicksort cost: " << t_end - t_start <<" ms"<< std::endl;
     
    createRand(a, a.length);
    t_start = clock();
    heapsort(a);
    t_end = clock(); 
    std::cout << "heapsort cost: " << t_end - t_start <<" ms"<< std::endl;
     
}


