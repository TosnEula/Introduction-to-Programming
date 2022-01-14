#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float y;
    float z;


printf("please input three variables: ");
scanf("%f%f%f",&x,&y,&z);

float average = (x+y+z)/3;
float variance = (pow(average-x,2) + pow(average-y,2) + pow(average-z,2))/3;


float max;
float min;

if (x<y && x<z)
{
    min = x;
}
else if (y<x && y<z)
{
    min = y;
}
else
{
    min = z;
}


if (x>y && x>z)
{
    max = x;
}
else if (y>x && y>z)
{
    max = y;
}
else
{
    max = z;
}

printf("\nThe average is: %.2f", average);
printf("\nThe variance is: %.2f", variance);
printf("\nThe max is:%.2f", max);
printf("\nThe min is:%.2f", min);
}

