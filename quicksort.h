#ifndef __QUICKSORT_H_
#define __QUICKSORT_H_ 

#include "array.h"

void quicksort(Array &a, int p, int r);

int partition(Array &a, int p, int r);

void quicksort_rand(Array &a, int p, int r);

int partition_rand(Array &a, int p, int r);
#endif
