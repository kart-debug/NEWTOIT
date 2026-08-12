#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[20];
    char s2[20];
    
    printf("Enter your password(less than 20 characters):");
    scanf("%s", s2);

    printf("Renter your password(less than 20 characters):");
    scanf("%s", s2);


    if (strcmp(s1,s2)==0)

       printf("The passwords match");

    else printf("The passwords are not matching, renter the correct one");
}