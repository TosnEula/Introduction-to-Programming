#include <stdio.h>
#include <stdlib.h>

void printArray (int a[][4])
{
    for(int i = 0; i<2; i ++)
    {
        for (int j = 0 ; j<4; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    //define
    int a [2] [2] = {{1, 2},{5,6}};

    printf("a[0] [0] = %d" ,  a[0][0]);
    printf("\na[0] [1] = %d" ,  a[0][1]);
    printf("\na[1] [0] = %d" ,  a[1][0]);
    printf("\na[1] [1] = %d\n" ,  a[1][1]);


   int b [2] [4] = {{1, 2, 3, 4},{5, 6, 7, 8}};
    printArray(b);

}
