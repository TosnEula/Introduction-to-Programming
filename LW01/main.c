#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a = 0;
 int b = 0;

 printf("Please input two numbers: \n");
 scanf("%d",&a);
scanf("%d", &b);

 int add = a+b;
 int sub = a-b;
 int mult = a*b;
 int div = a/b;

 printf("\n These are the results of the numbers %d and %d\n", a, b);

 printf("Addition = %d \nSubtraction = %d \nMultiplication = %d\nDivision = %d\n", add, sub, mult, div);

 if (a < b)
 {
     printf("\nAscending variables: %d, %d \n", b, a);
     printf("\nDescending variables: %d, %d \n",a,b);
 }
else
    {
    printf("\nAscending variables: %d, %d\n",a,b);
    printf("\nDescending variables: %d, %d\n",b,a);
    }

}
