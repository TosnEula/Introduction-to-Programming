#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
//Question 01
int main(void)
 {
     char text[80];
     char search[15];
     char *searchPtr;
     int res = 0;

     printf("Enter a line of text:\n");
     gets(text);
     printf("Enter a search string: ");
     scanf("%s", search);


      for (int i=0;i < strlen(text);i++) {
        if (text[i] == search[0]) {
               res++;
        }
    }
        printf("The total occurances of %s is %d",search,res);
     searchPtr = strstr(text, search);

     if (searchPtr)
     {
         printf("\nThe remainder of the line beginning with\n");
         printf("the first occurrence of %s:\n", search);
         printf("%s\n", searchPtr);


     searchPtr = strstr(searchPtr + 1, search);

         if (searchPtr)
         {

             printf("\nThe remainder of the line beginning with\n");
             printf("the second occurrence of %s:\n", search);
             printf("%s\n", searchPtr);
         }
         else
             printf("The search string appeared only once.\n");
     }
     else
         printf("\"%s\" not found.\n", search);

     return 0;
 }
*/


/*
//Question 2
#define N 10
int main()
{
    char city [N][20] = {"Memphis", "Prichard", "Jasper", "Troy", "Athen", "Monte", "Irvine", "Glendale", "Watts", "Antioch"};
    char temp [1][20] = {""};

    printf("The cities are: ");
    for(int l = 0; l < N; l++)
    {
        printf("%d. %s\n",l + 1, city[l]);
    }

    for(int i = 0; i<= 10; i++)
    {
        for (int j = i + 1; j<= 10; j++)
        {
            if (strcmp(city[i], city[j]) > 0)
            {
                strcpy(temp, city[i]);
                strcpy(city[i], city[j]);
                strcpy(city[j], temp);
            }
        }
    }


    printf("The cities after being sorted are: ");
    for(int q = 0; q <  N; q++)
    {
        printf("%d. %s\n",q + 1, city[q]);
    }

}
*/

/*
//Question 3
int main()
{
printf("I have acquired 100%% of the delivered knowledge.\n");


int x = 100;
double y = 100.123456789;
char z[] = {"Happy Spring"};

printf("%3d\n%4d\n%5d\n", x, x, x);
printf("%.3f\n%.4f\n%.5f\n",y, y, y);
printf("%.3s\n%.4s\n%.5s\n", z, z, z);


}
*/


/*
//Question 4
#define N 3
int main()
{
    int x[N] = {1,31,3};
    int c[N] = {4,55,77};
    int v[N] = {7,790,103};

    char z[N] = {'a, b, c'};
    char a[N] = {'d, e, f'};
    char q[N] = {'g, h, i'};

    printf("%p\n", x);

    for (int u = 0; u < N; u++)
    {
    printf("%p\n", c[u]);
    printf("%p\n", v[u]);
    }

    printf("\n");

    printf("%p\n", z);
    for (int g = 0; g < N; g++)
    {
    printf("%p\n", a[g]);
    printf("%p\n", q[g]);
    }

}
*/



//Question 5
int main()
{

    int mm = 0;
    int dd = 0;
    int yy = 0;

    printf("Please enter the date (mm-dd-yy)");
    scanf("%d%*c%d%*c%d",&mm,&dd,&yy);
    printf("month = %d day = %d year = %d", mm, dd, yy);

}
