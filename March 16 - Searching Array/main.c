#include <stdio.h>
#include <stdlib.h>
#define N 1000

//searching an array for key value(linear and binary search)

int linearSearch (int y[], int n , int keyElement) //searching each element
{
    for (int i = 0; i < n; i++)
    {
        if (y[i] == keyElement)
        {
            return i;
        }
    }
    return -1; // indicated failure
}

int binarySearch(int y[],int keyElement, int low, int high)
{
    while (low <= high)
    {
        int middleIndex = (low + high) / 2;
        if (y[middleIndex] == keyElement)
        {
            return middleIndex;
        }
        else if (y[middleIndex] > keyElement)
        {
            high = middleIndex - 1;
        }
        else
        {
            low = middleIndex + 1;
        }

    }
    return -1; // failed
}

int main()
{
    int x[N];
    for (int i = 0; i<N; i++)
    {
        x[i] = 3*i;
    }

    printf("Please enter the value you want to search for: \n");
    int key;
    scanf("%d", &key);

    //int foundIndex = linearSearch(x, N, key);
    int foundIndex = binarySearch(x, key, 0, N-1);
    if (foundIndex != -1)
    {
        printf("\n The Value was found on the index %d", foundIndex);
    }
    else
        printf("\n The Value was found was not found");

}
