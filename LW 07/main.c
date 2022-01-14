#include <stdio.h>
#include <stdlib.h>

int calcFib(int x)
{
    if (x <= 1)
    return x;
    return calcFib(x-1) + calcFib(x-2);



}


int main()
{
    int x;

    printf("Please input a variable for the Fibonacci series: ");
    scanf("%d",&x);


    printf("the value of %d in the Fibonacci series is %d",x, calcFib(x));

}
