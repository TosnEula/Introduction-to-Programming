#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 99

//case study to find the mean mode and median of an array


void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i%10 == 0)
        {
            printf ("\n");
        }
        printf("%3d", a[i]);
    }
}

void mean (int a[], int n)
{
    int total = 0;
    for(int i = 0; i <n; i++)
    {
        total += a[i];
    }

    printf("\nThe mean of the array is %.2f", (double)total/n);
}

void bubbleSort(int a[], int n)
{
    for (int z = 1; z <n; z++)
    {
        for(int j = 0; j< n-1; j++ )
        {
            if (a[j] > a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

void median (int a[], int n)
{
    bubbleSort(a,n);
    printArray(a,n);
    printf("\nThe median of the array is %d", a[n/2]);
}

int main()
{
    srand(time(NULL));
    int x[N];

    for (int i = 0;  i< N; i++)
    {
        x[i] = 1 + rand()%9;
    }

    printArray(x,N);
    mean(x,N);
}
