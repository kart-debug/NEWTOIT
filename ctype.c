#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
    char s[]="This is the Way.";

    int length= strlen(s);

    for (int i=0; i<length; i++)
      if (isupper(s[i]))
        printf(" %c Upper Case\n", s[i]);
     else if(islower(s[i]))
       printf("%c Lower Case\n", s[i]);

    else printf("\n");

}