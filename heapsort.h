#ifndef __HEAPSORT_H_ 
#define __HEAPSORT_H_ 


#define RIGHT(NODE) NODE*2+1
#define LEFT(NODE) NODE*2
#define PARENT(NODE) NODE/2

#include "array.h"

void maxHeapify(Array &a, int index);

void buildMaxHeap(Array &a);

void heapsort(Array &a);




#endif
