#include<iostream>
#include <stdlib.h>
#include <time.h>
#include "array.h"
#include "tools.h"
#include "heapsort.h"
#include "quicksort.h"
#include "radixSort.h"
int main(int argc, char *argv[])
{
    Array a;
    clock_t t_start, t_end;
    int num = 10000;
    bool worse = false;
    
    if(argc >= 2){
        for(int i = 1; i < argc; i++)
        {
            char c = argv[i][0];
            if(c == 'w'){
                worse = true;
            }else if (c >= '0' && c <= '9')
            {
                num = atoi(argv[1]);
            }else{
                std::cout << "arguments error" << std::endl;
                return 0;
            }
        }
    }
    int *arr = new int[num];
    a.head = arr;
    a.length = num;
 
    createRand(a, a.length, worse);
    t_start = clock();
    quicksort_rand(a, 1, a.length); 
    t_end = clock(); 
    std::cout << "quicksort_r cost: " << t_end - t_start <<" cpu clock times"<< std::endl;

    createRand(a, a.length, worse);
    t_start = clock();
    quicksort(a, 1, a.length); 
    t_end = clock(); 
    std::cout << "quicksort cost: " << t_end - t_start <<" cpu clock times"<< std::endl;

    /*
    for(int i = 1; i<= a.length; i++){
            std::cout << a[i] << std::endl;
    }
    */
     
    createRand(a, a.length, worse);
    t_start = clock();
    heapsort(a);
    t_end = clock(); 
    std::cout << "heapsort cost: " << t_end - t_start <<" cpu clock times"<< std::endl;


    createRand(a, a.length, worse);
    t_start = clock();
    radixSort(a); 
    t_end = clock(); 
    std::cout << "radix sort cost: " << t_end - t_start <<" cpu clock times"<< std::endl;

     
}


