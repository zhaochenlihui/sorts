#ifndef __ARRAY_H_
#define __ARRAY_H_ 


//define array, index starts form 1
class Array
{
public:
    int length;
    int* head;
    inline int& operator[](int index)
    {
        return head[index-1];
    } 

    
};





#endif
