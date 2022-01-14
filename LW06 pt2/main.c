#include <stdio.h>
#include <stdlib.h>



int factor(int a, int b)
{
    int num;

    if (a%b == 0)
    {
        num = 1;
        return num;
    }
    else if(b%a == 0)
    {
        num = 2;
        return num;
    }
    else
    {
    num = 3;
    return num;
    }



}

int main()
{
    int a;
    int b;

    printf("please input a variable: ");
    scanf("%d", &a);
    printf("\nPlease input another variable: ");
    scanf("%d", &b);

    if (factor(a,b) == 1)
        {
        printf("\n%d is a factor of %d", b, a);
        }
    else if (factor(a,b) == 2)
        {
        printf("\n%d is a factor of %d", a, b);
        }
    else
        printf("\nNeither variables are factors");


}


