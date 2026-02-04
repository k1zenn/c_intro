#include <stdio.h>

#include <string.h>


int main()
{
    char int1[50];

    char int2[50];

    printf("Enter your horroscope:\n");

    scanf("%s %s",int1,int2);
    
    if (strcmp(int1,int2)==0)
    {
        printf("same horroscope");
    }

    else
    {
        printf("Different horroscope");
    }

    return 0;
}
