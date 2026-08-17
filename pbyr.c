#include <stdio.h>

void addone(int *a);


int main(void)
{
  int b=5;
  addone(&b);
  printf("b is now %d\n", b);
  
}

void addone(int *a)
{
    *a = *a+1;

}