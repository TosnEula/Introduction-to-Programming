#include <stdio.h>

int main()
{
    int base;

    int power;



    printf("\nPlease input a base number: ");
    scanf("%d", &base);

    printf("\nPlease input a power number: ");
    scanf("%d", &power);

    int baseN = base;

    if(power == 0)
    {
        printf("The output is: 1");
    }
    else if(power >= 1)
    {
        for(int counter = 0; counter != power - 1;counter++)
        {
            baseN *= base;
        }


        printf("\n%d to the power of %d is: %d", base, power, baseN);
    }
    else
    {
        for(int counter = 0; counter != power + 1;counter--)
        {
            baseN *= base;
        }
        printf("\n%d to the power of %d is: 1/%d", base, power, baseN);

    }


}
