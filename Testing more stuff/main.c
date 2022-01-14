#include <stdio.h>
#include <math.h>

int main()
{
    float income = 0;
    float age = 0;
    float taxRate = 0;
    float taxTotal = 0;
    float discount = 0;

    printf("Please input your annual income: $ ");
    scanf("%f", &income);

    printf("\nPlease input your age: ");
    scanf("%f", &age);

    if (income <= 50000){
        taxRate = 0;
    }
    else if(income > 50000 && income <= 100000)
     {
         taxRate = 0.07;
     }
    else{
        taxRate = 0.09;
        }
    if(taxRate > 0 && age > 60)
    {
        taxRate -= 0.03;
    }

       discount = taxRate;

    taxTotal = income * taxRate;

    if (age < 60)
        {
        taxRate = (taxRate * 100);
        }
    else if (taxRate > 0 && age > 60)
        {
        taxRate = (taxRate + 0.03) * 100;
        discount *= 100;
        }

    printf ("\n\nYour tax is: $%.2f", taxTotal);
    printf ("\nYour tax rate is : %.1f%%", taxRate);

    if (age > 60)
    printf ("\nYour discounted tax rate is: %.1f%%", discount);




}

