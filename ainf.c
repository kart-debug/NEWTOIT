#include <stdio.h>


void add_one(int array[], int length);

int main(void)
{

    int a[]={2,4,5,6,7};
    add_one(a,6);

    for(int i=0; i<6; i++)
        {printf("a[%d] =%d\n", i, a[i]);
          }
}

void add_one(int array[], int length)
{
    for(int i=0; i<length; i++) array[i] += 1;
}

