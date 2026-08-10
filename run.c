#include<stdio.h>
#include<string.h>

int main(void)

{
    char s1[]= "I wanna go to your house";
    
    int length =strlen(s1);
    int num_ws=0;

    for (int i=0; i<length; i++)
    if (s1[i]== 'w') num_ws++;

  printf(" Length of the string is %d\n", length);
  printf("%d is the number of Ws in the string", num_ws);
}