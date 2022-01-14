/*
// Question 4
#include <stdio.h>
#include <stdlib.h>

void flip (int *lp, int *pl)
{
    int tpm;

    tpm = *pl;
    *pl = *lp;
    *lp = tpm;





}


int main()
{
    int a;
    int b;



    printf("Please input your first value: ");
    scanf("%d", &a);

    printf("Please input your second value: ");
    scanf("%d", &b);

    printf("The value of the first value is: %d\n", a);
    printf("The value of the second value is: %d\n", b);

    flip(&a,&b);


    printf("\nThe value of the first switched is now: %d\n", a);
    printf("The value of the second value switched is now: %d", b);

}
*/

/*
//Question 6.
#include <stdio.h>
int main() {
int x[5] = {10, 20, 30, 40, 50};
int* ptr;
ptr = &x[2];
printf("%d\n", *ptr); // print the 3rd element, 30, using the pointer ptr
printf("%d\n", *(ptr+1)); // print the 4th element, 40, using the pointer ptr
printf("%d\n", *(ptr-1)); // print the 2nd element, 20, using the pointer ptr
return 0;
}

*/

/*
#include <stdio.h>
#define N 5


void show (int *grab)
{
    for (int i =0; i < N; i++)
    {
    printf("salary %d = %d\n", i + 1, *(grab + i));
    }

    int cut;
    printf("\nSalaries with a 5%% increase are:\n");
    for (int i =0; i < N; i++)
    {
        cut = *(grab + i) *0.05;
        *(grab + i) += cut;
         printf("salary %d = %d\n", i + 1, *(grab + i));
    }


}

int main()
{
    int salary [] = {1500, 3000, 2500, 3300, 5000};
    show(salary);

}
*/
