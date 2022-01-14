#include <stdio.h>
#include <stdlib.h>

int calcFac(int x)
{
    //base case
    if (x==1)
    {
    return 1;
    }
    else
    {
        return (x * calcFac(x-1));
    }
}



int main()
{
   int a;
   printf("Please enter a number: \n");
   scanf("%d",&a);
   printf("Factorial of %d is %d\n", a , calcFac(a));
}
