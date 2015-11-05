#include "quicksort.h"
#include "tools.h"

//partiton the array
int partition(Array &a, int p, int r)
{
    int x = a[r];
    int i = p-1;
    for(int j = p; j < r; j++)
    {
        if(a[j] < x){
            i++;
            exchange(a[i], a[j]); 
        }
    } 
    exchange(a[i + 1], a[r]);
    return i + 1;
}

void quicksort(Array &a, int p, int r)
{
    if(p < r){
        int q = partition(a, p, r);
        quicksort(a, p, q - 1);
        quicksort(a, q + 1, r); 
    }
}

int partition_rand(Array &a, int p, int r)
{
    int i = rand()%(r-p) + p;
    exchange(a[r], a[i]);
    return partition(a, p, r);
}

void quicksort_rand(Array &a, int p, int r)
{
    if(p < r){
        int q = partition_rand(a, p, r);
        quicksort_rand(a, p, q - 1);
        quicksort_rand(a, q + 1, r);
    }
}
