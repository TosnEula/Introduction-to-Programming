#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Hu 90

/*
void showBits (unsigned x)
{
    if (x > 1)
    {
        showBits(x/2);
    }
    printf("%d", x%2);
}
int main()
{
    showBits(7&4);
    return 0;
}
*/
/*
struct cooking
{
     float oil;
     float sugar;
     char looks;
};



int main ()
{
    struct cooking Cooking;
    Cooking.oil = 20.66;

    printf("%.2f", Cooking.oil);
}
*/

/*
int main()
{
    int mm = 0;
    int dd = 0;
    int yy = 0;
    printf("Please enter the date (mm-dd-yy)");
    scanf("%d%*c%d%*c%d",&mm, &dd, &yy);
    printf("month = %d day = %d year = %d", mm, dd, yy);
}
*/


enum jack {Jim = 1,Bob, Frank};

int main ()
{
    enum jack Jack;

    char words [90];
    fgets(words, 90, stdin);

  //  if(strchr(words, 'a') != NULL;)
    //    printf("It occurs at, ")

    printf("%s", words);


    printf("%d", Jack);
}


/*
#include <stdlib.h>
#include <time.h>


int main ()
{

    srand(time(NULL));
    int grade;
    int f = 0;
    int i = 0;
    int r = 0;
    int s = 0;
    int t = 0;

   while((scanf("%d", &grade)) != EOF )
    {
        switch(grade)
        {
        case 3:
        f ++;
        break;

        case 2:
        i ++;
        break;

        case 10:
        r ++;
        break;

        case 20:
        s ++;
        break;

        case 100:
        t ++;
        break;
        default:
        printf("Wow, nothing");
        break;
        }
    }

printf("%d\n%d\n%d\n%d\n%d", f,i,r,s,t);


}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));

    for(int k =0; k != 50; k++)
    {
    printf("%d\n", rand() % (20-10 + 1) + 10);
    }
}
*/


/*
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char num [6];
    int val;
    int fives = 0;
    int sevens = 0;
    printf("Please input your number: ");
    fgets(num, 6, stdin);



    for(int count = 0; count < 5; count++)
    {
        val = num[count] - 48;

        if (val == 5)
        {
            fives++;
        }
        else if (val == 7)
        {
            sevens++;
        }

    }

    printf("%d", fives);
    printf("\n%d", sevens);
}
*/
