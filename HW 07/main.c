#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int recursiveMinimum (int x[], int y)
{
    int min;

    if( y == 1)
    {
        return x[0];
    }
    else
    {

        min = recursiveMinimum(x, y-1);
        return x[y] < min ? x[y] : min;

    }

}


int main()
{
    int val;

    printf("Please enter the amount of numbers: ");
    scanf("%d", &val);

    int num [val];

    printf("Please input %d integers: ", val);


    for (int i = 0; i < val; i++)
    {
      scanf("%d", &num[i]);
    }

printf("The lowest value is: %d", recursiveMinimum(num, val));

}


/*
#include <stdio.h>
#include <stdlib.h>

void stringReverse (char x [])
{
    if ('\0' == x[0])
    {
    return;
    }
    else
    {
        stringReverse(&x[1]);
        putchar(x[0]);

    }



}



int main()
{
    char s [50];
    printf("Please enter a string: ");
    fgets(s,50,stdin);


    printf("The line in reverse is:");
    stringReverse(s);

}
*/
