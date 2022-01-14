#include <stdio.h>
#include <math.h>

int main()
{
float inp;
int choice;
float fin;

do
    {
    printf("please input a variable: ");
    scanf("%f", &inp);

    printf("\nPlease choose an option - 1(Round Up)\n\t\t\t  2(Round Down)\n\t\t\t  3(Exit)\n");
    scanf("%d", &choice);


    if(choice == 1)
        {
        fin = floor(inp);
        printf("\n%.1f rounded down is %.1f\n\n", inp, fin);
        }
    else if(choice == 2)
        {
        fin = ceil(inp);
        printf("\n\n%.1f rounded up is %.1f\n\n", inp, fin);
        }

    }
    while(choice != 3);

}
