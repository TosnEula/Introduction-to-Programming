
//Question 1
#include <stdio.h>
#include <math.h>


 double num;
double f(double x)
{

    double out = 0;
    for (double z = 1; z < 20; z++)
    {
        out += pow(-1,z + 1)* pow(x,z)/z;
    }

    return out;

}


int main ()
{


    printf("please input a value: ");
    scanf("%lf", &num);

    printf("The value is %lf",f(num));
}



/*
//Question 5
#include <stdio.h>
#include <stdlib.h>

int g(int x)
{
    int cor1 [x];
    int a = 1;
    int total = 0;
    static int max = 0;
    int min = 100;

    while (a < x+1)
    {
    printf ("Please input a value for course %d: ",a);
    scanf("%d", &cor1 [a]);
    total += cor1[a];

    if (cor1[a] > max)
        max = cor1[a];
    if (cor1[a] < min)
        min = cor1[a];

    a++;
    }

    for (int b = x; b != 0; b--)
    {
        printf("\n%d", cor1[b]);
    }

    printf("\nThe maximum value is %d", max);
    printf("\nThe minimum value is %d", min);

    int average = total/x;
    printf("\n The average is %d", average);

}

int main ()
{
int grade;
printf("please enter the number of grades: ");
scanf("%d",&grade);

g(grade);

}
*/


/*
//Question 3
int fac(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * fac(n-1));
}


int main()
{
    int val;
    printf("Please input a variable: ");
    scanf("%d", &val);

    printf ("The factorial of %d is %d",val ,fac(val));
}

*/
