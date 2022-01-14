#include <stdio.h>
#include <stdlib.h>
#define N 10


int main()
{


    int a [N] = {2, 4, 12, 32 ,10 ,12 ,89 ,37 ,45};
    printf("displaying the array in its original order:\n");

    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    //bubble sort (sink sort)
    // outer for loop controls number of pass through the array
    for (int pass = 1; pass < N; pass++)
    {
        // inner for loop to control number of comparisons each pass
        for (int j = 0; j< N-1; j++)
        {
            //compare elements and swap
            if(a[j] > a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    printf("displaying the elements after sorting: \n");
        for (int i = 0; i<N; i++)
        {
            printf("%d ", a[i]);
        }

}
