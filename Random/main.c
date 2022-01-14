#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    for(int i = 0; i < 10; i++)
    {

        printf("%d", 1 + rand()%6);
        srand(time(NULL));
        if (i%5 == 0){
            printf("\n");

        }
    }
}
