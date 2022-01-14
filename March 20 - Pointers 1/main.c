//First Topic

#include <stdio.h>
#include <stdlib.h>


void squareByRef(int *xPtr)
{
    *xPtr *= *xPtr;
}

int main()
{
    int x = 5;
    int *xPtr = &x;

    printf("Address of x is: %p\n", &x);
    printf("Address of xPtr is: %p\n", xPtr);
    printf("value of xPtr is: %d\n", *xPtr);
    printf("Value of x is: %d\n", x);
    printf("*&aPtr: %p\n", &*xPtr);
    printf("&*aPtr: %p\n", *&xPtr);


printf("Please enter a number to calculate its square: ");
int a;
scanf("%d", &a);

squareByRef(&a);

printf("The square is %d", a);

}


// second topic
/*
#include <ctype.h>


//constant pointer to constant data
int main()
{
    int x = 5;
    int y;
    const int* const ptr = &x;

    *ptr = 7; // cannot assign a new value
    ptr = &y;// cannot change address
}



/*
//constant pointer to Non-constant data
int main()
{
    int x;
    int y;

    int* const ptr = &x;

    *ptr = 7; //allowed
//    ptr = &y; // error

}
*/

/*
//Non-constant pointer to constant data
void f(const int *xPtr)
{
    *xPtr = 100;
}

int main()
{
    int y;
    f(&y);
}
*/


/*
//Non-constant pointer to Non-constant data
void convertToUpper (char *sPtr)
{
    while (*sPtr != '\0')
    {
        *sPtr = toupper(*sPtr);
        ++sPtr; //goes to the next character
    }
}



int main()
{


    char string[] = "This is a Test";
    printf("The string before is: \n %s", string);

    convertToUpper(string); //pass by reference
    printf("The string after is: \n %s", string);


}
*/


/*
//Third Topic
#include <stdio.h>
#define N 10

void swap(int *ptr1, int *ptr2)
{
    int tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}

void bubbleSort (int array[], const int size)
{

    for(int pass = 0; pass <N-1; pass++)
    {
        for (int j = 0; j<N-1; j++)
        {
            if (array[j] > array [j+1])
            {
                swap(&array[j],&array[j+1]);
            }
        }
    }
}


int main()
{
    int a [N] = {2,6, 4, 0, 12 ,34, 54 ,3 ,44, 1};
    printf("The array in its original order: \n");

    for (int i = 0; i < N; i++)
    {
        printf("%4d", a[i]);
    }

    bubbleSort(a, N);

    printf("The array after sorting in ascending order: \n");

    for (int i = 0; i < N; i++)
    {
        printf("%4d", a[i]);
    }
}
*/

/*
//fourth topic
#include <stdio.h>

//sizeof: a unary operator to determine the size (bytes) of any data type

int main()
{
    int x;
    char y;
    float z;
    double k;

    int array[20];


    printf("The size of int in my machine is: %u\n", sizeof(x));
    printf("The size of character in my machine is: %u\n", sizeof(y));
    printf("The size of floating point type in my machine is: %u\n", sizeof(z));
    printf("The size of double in my machine is: %u\n", sizeof(k));
    printf("The size of array[20] in my machine is: %u\n", sizeof(array));

}
*/

/*
//fifth topic
//pointer Expression  (arithmetics)

#include<stdio.h>
#define N 5

int main()
{
    int x[N] = {1,2,3,4,5};
    int *xPtr = x;

    for(int i = 0; i < N; i++ )
    {
        printf("x[%d] = %d\n", i ,*(x+i));
    }

    for(int i = 0; i < N; i++ )
    {
        printf("x[%d] = %d\n", i ,*(xPtr + i));
    }
}

*/
