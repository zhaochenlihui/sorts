#include "radixSort.h"
#include "tools.h"

void countSort(Array &a, int digits)
{
    int *hB = new int[a.length]; 
    int *hA = a.head;
    int counter[256] = {0};
    for(int i = 0; i < a.length; ++i)
    {
        int dindex = getdigits(hA[i], digits); 
        counter[dindex]++;
    }
    for(int i = 1; i < 256; ++i)
    {
        counter[i] = counter[i] + counter[i - 1];
    }
    for(int i = a.length - 1; i >= 0; i--) 
    {
        int dindex = getdigits(hA[i], digits); 
        hB[counter[dindex]-1] = hA[i]; 
        counter[dindex]--; 
        
    }
    delete[] a.head;
    a.head = hB; 
}

void radixSort(Array &a)
{
    for(int i = 1; i <= 4; i++)
    {
        countSort(a, i);
    }
}
