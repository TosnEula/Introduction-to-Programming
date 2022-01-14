#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Please input a variable: ");
    scanf("%f", &num);

    num *= 10;
    printf("\n\nthe product of 10 * %f is: ", num);

    if (num > 10)
    {
        printf("\n\n%f is greater than 10: ", num);
    }
    else
    {
        printf("\n\n%f is less than 10: ", num);
    }

    printf("\nthe product to 2 digits of precision %.2f", num);
    printf("\nthe product to 3 digits of precision %.3f", num);
    printf("\nthe product to 4 digits of precision %.4f", num);
    printf("\nthe product to 5 digits of precision %.5f", num);
    }
