#include <stdio.h>
#include <stdlib.h>


float myCalc (float x, float y, int z)
{
    float value = 0;


    if (z == 1)
    {
      value = x + y;
      return value;
    }
    else if (z == 2)
    {
      value = x-y;
      return value;
    }
    else if (z == 4)
    {
      value = x/y;
      return value;
    }
    else if (z == 3)
    {
        value = x*y;
        return value;
    }
    else
    {
        value = (int)x % (int)y;
        return value;
    }

}



int main()
{
    float num1;
    float num2;
    int Yes;

    printf("Please input your first number: ");
    scanf("%f", &num1);
    printf("Please input your second number: ");
    scanf("%f", &num2);
    printf("Please input an operation: 1(Addition)\n\t\t\t2(Subtraction)\n\t\t\t3(Multiplication)\n\t\t\t4(Division)\n\t\t\t5(Modulus)");
    scanf("%d", &Yes);

    printf("The calculation is: %.2f", myCalc(num1,num2,Yes));
}
