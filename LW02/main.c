#include <stdio.h>
#include <stdlib.h>

int main()
{
   float total = 0;             //Defining variables
   float cGrade = 0;
   float highest = 0;
   float lowest = 100;
   int counter = 0;



   while (cGrade != -1)
   {
       printf("Please enter a grade(input -1 to end):");   //Requesting input from the user
       scanf ("%f",&cGrade);

       if (cGrade != -1)
        {
            total += cGrade;   //creating a total amount
            counter++;          //keeps track of the amount of loops



            if(highest < cGrade )           //Finding the highest variable
                {
                highest = cGrade;
                }

            if (lowest > cGrade)           //Finding the lowest variable
                {
                lowest = cGrade;
                }
        }
   }

    if (counter != 0)  // fail safe in the case that no grade was added
        {
        total = total/counter;                  //finds average
        printf("\nThe average of the values you entered is : %.2f" , total);      //Printing results
        printf("\nthe highest value is: %.2f", highest);
        printf("\nthe lowest value is: %.2f", lowest);
        }
    else
    {
        printf ("You had not input any grades.");    //alternative if no grade was registered
    }

}
