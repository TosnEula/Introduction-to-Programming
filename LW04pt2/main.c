#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;




    printf("Please input a number: ");
    scanf("%d", &num);

    for (int counter = num; counter != 0; counter--)
    {
        printf("\n");
        for(int helper = counter;helper != 0; helper--)
        {
            printf("*");
        }

    }
}
