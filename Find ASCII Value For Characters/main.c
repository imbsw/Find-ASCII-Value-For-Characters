#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int value;

    printf("Enter a Character:");
    scanf("%c",&ch);

    value=(int)ch;

    printf("ASCII Value %c is %d",ch,value);

    return 0;
}
