#include <stdio.h>
#include <stdlib.h>


void useLocal(void);
void useStatisticLocal(void);
void useGlobal (void);

int x = 2;


int main()
{
    int x = 4;
    printf("The local x in main is %d\n", x);

    {
        int x = 10;
        printf("The inner block value is %d\n", x);
    }

    printf("The local x in outer scope is %d\n",x);

    useLocal();
    useStatisticLocal();
    useGlobal();
    useLocal();
    useStatisticLocal();
    useGlobal();

}

void useLocal(void)
{
    int x = 55;
    printf("local x in useLocal is %d\n",x);
    x++;
    printf("local x in use local is %d\n", x);
}

void useStatisticLocal(void)
{
    static int x = 73; // local variable that has storage duration of static
    printf("local x in useStaticLocal is %d\n,x);
    x++;
    printf("local x in useStaticLocal is %d\n", x);

}


void useGlobal(void)
{
    printf("global x is %d\n", x);
    x*=3;
    printf("global x is %d\n", x);
}
