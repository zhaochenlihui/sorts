#include "heapsort.h"
#include "tools.h"

void maxHeapify(Array &a, int index)
{
    int l = LEFT(index);
    int r = RIGHT(index);
    int largest = 0;
    if (l <= a.length && a[l] > a[index]) {
       largest = l; 
    }else{
        largest = index;
    }
    if (r <= a.length && a[r] > a[largest]) {
       largest = r; 
    }
    if (largest != index) {
       exchange(a[index], a[largest]); 
       maxHeapify(a, largest);
    }
}

void buildMaxHeap(Array &a)
{
    for(int i = a.length/2; i > 0; i--)
    {
        maxHeapify(a, i);
    }
}

void heapsort(Array &a)
{
    int len = a.length;
    buildMaxHeap(a);
    for (int i = a.length; i >=2; i--)
    {
        exchange(a[1], a[a.length]);
        a.length--;
        maxHeapify(a, 1); 
    }
    a.length = len;
}
