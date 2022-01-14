#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Defining variables
    int letter;
    int colR = 0;
    int colO = 0;
    int colY = 0;
    int colG = 0;
    int colB = 0;
    int colI = 0;
    int colV = 0;



    printf("please input the first letter of the marble's colour (enter EOF to end):");        //Tells user to input the colour of the marbles
    while ((letter = getchar()) != EOF)

    {
        switch(letter){                      //switch statement which calculates each input taken
        case 'R':
        case 'r':
            colR += 1;
            break;
        case 'O':
        case 'o':
            colO += 1;
            break;
        case 'Y':
        case 'y':
            colY += 1;
            break;
        case 'G':
        case 'g':
            colG += 1;
            break;
        case 'B':
        case 'b':
            colB += 1;
            break;
        case 'I':
        case 'i':
            colI += 1;
            break;
        case 'V':
        case 'v':
            colV += 1;
        break;
        case '\n':                  //Case statement that stops enter from being registered
            break;
        default:
            printf("not a valid colour.");          // case statement which takes outputs a default statement if an unknown variable is inserted.


        }
    }
    //outputting the results
        printf("\nthese are the results:\n");
        printf("Red = %d\t\t Orange = %d",colR,colO);
        printf("\nYellow = %d\t Green = %d",colY,colG);
        printf("\nBlue = %d\t Indigo = %d",colB,colI);
        printf("\nViolet = %d", colV);

    }

