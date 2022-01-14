#include <stdio.h>
#include <stdlib.h>
//conversion specifiers: %p (displaying pointer value) and %%(displaying the percent character)


int main()
{
    /*
    int x = 2;
    int *xPtr = &x;

    printf("The value of xPtr is %p \n", xPtr);
    printf("The address of x is %p \n", &x);

    printf("printing %% in format control string");
    */

/*printing with field width and precision
Field width: the size of a field in which we display the data
When used with integer convesion specifier, the precision indicates the minimum number of digits to be printed
If the printed value contains fewer digits than the specified precision and the precision value has a leading zero or decimal point
Otherwise, space will be inserted

The precision, in floating point numbers, the number of digits to appear after the decimal point.
When used with g and -G, the precision is the maximum number of significant digits to be printed.

When used with conversion specifier s, the precision is the maximum number of characters to be displayed.
*/
/*
printf("%5d\n",1);
printf("%5d\n",12345);
printf("%5d\n",1234567);

int x = 123;
printf("%\t %.4d\m\t%.9d\n",x,x);

double y = 123.45678;
printf("\t%.3f\n\t%.3g\n", y);

char z[] = "Happy day";
printf("\t%.3s\n",z);
*/


/*
Flags in the printf statement (Immediately after the %)
- left justify the output witin the specified field
+ display a plus sign preceding positive values and minus sign preceding negative values
# prefix 0 to the output value when used wiht the octal conversion specifier
  prefix Ox or ox to the output when used with the hexadecimal number
  0 Pad a field with leading zero
*/

/*
printf("%10s\n", "Happy");
printf("%-10s\n", "Happy");
printf("% d\t%d\n", 123,-123);
printf("%+d\t%+d\n", 123,-123);
*/

/*
Escape sequences represented by a backslash (\)

\' output the single quote character
\" output the Double quote character
\? output the single question mark
\\ output the backslash character
\a cause an audible alert or visual alert
\b move the cursor back one position on the current line
\f move the cursor to the start of next logical page
\n move the cursor to beginning of next line
\r move the cursor to the beginning of the current line
\t move the cursor to the next horizontal tab position
\v move the cursor to the next vertical tab position
*/

/*
//Reading an integer number
d  read an optionally signed decimal integer
i  read an optionally signed decimal integer
o  read an octal integer
u  read an unsigned decimal integer
x or X  read a hexadecimal integer
h, l, ll    indicate that a short, long, or long long integer is to be input

//Reading a floating-point number
e, E, f, g, G read floating point value
l or L        to indicate the double or long double value

// reading characters and strings
c   read a character
s   read a string

p   read an address of the same form produced when an address is output with %p in a printf statement
%   skip a percent sign in the input
n   Store the number of characters input so far in this call to scanf
*/


/*
char x;
char y[9];

printf("Please enter a string: \n");
scanf("%c%8s",&x,y);

printf("The character is \'%c\'\n" ,x);
printf("The remaining string is \"%s\"" ,y);
*/


/*
int x;
int y;
printf("Please enter a six digit number: \n");
scanf("%2d%d",&x,&y);

printf("The first integer is %d and the second integer is %d",x,y);
*/

/*
// * assignment supression character
int mm = 0;
int dd = 0;
int yy = 0;
printf("Please enter the date (mm-dd-yy)");
scanf("%d%*c%d%*c%d",&mm, &dd, &yy);
printf("month = %d day = %d year = %d", mm, dd, yy);
*/
}

