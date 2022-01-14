#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int helper = 0;



    printf("Please input a number: ");
    scanf("%d", &num);


    while (num !=0)
    {
        helper = num;

        while (helper != 0)
        {
            printf("*");
            helper--;
        }

        num--;
        printf("\n");
    }



}
