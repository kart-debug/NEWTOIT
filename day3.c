#include <stdio.h>

float triple(float n);

int main(void)
{
    float x = 5;
    x=triple(x);
    printf("x:%f\n", x);

    return 0;

}

float triple(float n )

{
    n= n*3;
    return n;
}
