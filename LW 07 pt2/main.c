#include <stdio.h>
#include <stdlib.h>

void printBase(int hei,int wid)
{

    int count = 0;
    for(int x = 0; x < hei; x++)
    {
            while (count < wid-1)
            {
                printf("*");
                count++;
            }
            printf("*");
            printf("\n");
            count = 0;
    }

}


void printHead (int head)
{
    int counter = 0;
    for (int x = 0; x < head + 1; x++)
    {
        while (counter < head - 1)

            {
             printf("*");
             counter ++;
            }

            printf("*\n");
            counter = 0;
            head--;
            x = 0;
    }
}


int main()
{
    int width;
    int height;
    int head;
    printf("Please enter the width of the arrow: ");
    scanf("%d", &width);
    printf("Please enter the height of the arrow: ");
    scanf("%d", &height);
    printf("Please enter the head of the arrow: ");
    scanf("%d", &head);

    printf("\nThe arrow appears as\n");
    printBase(width,height);
    printHead(head);

}
