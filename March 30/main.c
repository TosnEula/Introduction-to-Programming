#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Characters and strings
/*int main()
{
    char c = 'B';

    if (islower(c))
        printf("The character c is a digit");
    else
        printf("The character c is not a digit\n");



    printf("%s\n%s%s\n", "According to is digit: ", isdigit('8') ? "8 is a ": "8 is not a " ,"digit");

}
*/


//String conversion functions
int main()
{
/*
    //strtod = converts character to double
    char *test = "60% are admitted";
    char* testptr;

    double d = strtod(test, &testptr);

    printf ("The string \"%s\"is conveted to \n", test);
    printf("double value %.2f and the string \"%s\"", d,testptr);
*/

/*
    //strtol = converts char to long double
    char *test = "1234567 are admitted";
    char* testptr;

    long x = strtol(test, &testptr,0);

    printf ("The string original string is %s\n", test);
    printf("The converted value is %ld\n", x);
    printf("The remainder of the orignal string is %s\n", testptr );

}
*/



/*
standard input/output libraries

int get char(void) = inputs the next character from the standard input and returns it as an integer

int put char(int c) = prints the charatcer stored in c and returns it as an integer

int puts(cons char *s) = prints string s followed by a newline character

char *fgets(char* s, int n, FILE *stream) = It inputs from specified stream into array s until a newline or end-of-file is encountered, or until n-1 bytes are read.

int sprintf(char* s, ...) = equivalent to printf, except the output is stored in the array s instead of printed on the screen.

int sscanf(char* , ..) = equivalent to scanf, except the input is read from the array s rather than from the keyboard
*/


/*

#define N 80
void reverse (const char* const sPtr)
{
    if (sPtr[0] == '\0')

        return;
    else
    {
        reverse(&sPtr[1]);
        putchar(sPtr[0]);

    }
}

int main()
{
    char sentence[N];
    puts("Please enter a line of text: ");
    fgets(sentence, N, stdin);
    printf(" \nThe sentence printed in reverse is: ");
    reverse(sentence);
}
*/

/*
int main()
{
    char buffer[50];
    int a = 10, b = 20, c;
    c = a + b;
    sprintf(buffer, "Sum of %d and %d is %d", a, b, c);

    // The string "sum of 10 and 20 is 30" is stored
    // into buffer instead of printing on stdout
    printf("%s", buffer);

    return 0;
}
*/

/*
int main()
{
    char *str = "Tom Manager 28";
    char name[10], designation[10];
    int age, ret;

    ret = sscanf(str, "%s %s %d", name, designation, &age);

    printf("Name: %s\n", name);
    printf("Designation: %s\n", designation);
    printf("Age: %d\n", age);

    // signal to operating system program ran fine
}
*/


/*
string handling library

char *strcpy(char *sl, const char *s2) = copies s2, int array sl, the value of sl will be returned

char *strncpy ( char *sl, const char *s2, size_t n) = copies at most n characters of s2 into array sl and returns sl.

char * strcat (char *sl, const char *s2) = appends string s2 to array sl. The first character of s2 overwrites the null character of sl

char* strncat (char *sl, const char *s2, size_t n ) = appends at most n character of string 2 into array sl...

int strcmp(const char *sl, const char *s2) = compares the string s1 with the string s2. the function returns 0, less thatn 0, or greater than 0, if sl is equal to, less than or greater than s2 respectively.

int strncmp (const char *sl, const char* s2, size_t n) = compares up to n characters of...

char *strchr(const *s, int c) = locates the first occurence of character c in string s.
*/

/*
#define N1 20
#define N2 10


    char x[] = "Happy Day to You";
    char y[N1];
    char z[N2];
    printf("\nThe string in array x is: %s", x);
    printf("\nThe string in array y is: %s", strcpy(y,x));
    z[N2-1] = '\0';
    printf("\nThe string in array z is: %s", strncpy(z,x,N2-1));
*/


/*
const char *sl = "Happy New Year";
const char *s2 = "Happy Holidays";
printf("The comparison of sl-sl yields %d\n", strcmp(sl,sl));
printf("The comparison of sl-s2 yields %d\n", strcmp(sl,s2));
printf("The comparison of s2-sl yields %d\n", strcmp(s2,sl));
*/

/*
const char *test = "This is a test";
char character1 = 'a';
char character2 = 'z';

if(strchr(test, character1) != NULL)
    printf("The character \'%c\' was found in string \"%s\"", character1,test);
else
    printf("The character \'%c\' was found in string \"%s\"", character1,test);
*/
/*
char test[] = "This is a test";
printf("The string to be tokenized is: %s\n", test);

char *tokenPtr = strtok(test, " ");
while (tokenPtr != NULL)
{
    printf("%s\n", tokenPtr);
    tokenPtr = strtok(NULL, " ");
}
*/



/*
//New topic - memory from the string handling library
void *memcpy(void *sl, const void *s2, size_t n) | copies n bytes from the object pointed to by s2 into object pointed to by s1
void *memmove(void *sl,const void *s2, size_t n); | copies n bytes from the object pointed by s2 into the object pointed by s1.
    The copy is performed as if the bytes were first copied from the object pointed to by s2 into a temporary array and then
    from the temporary into the object pointed by s1.

int memcmp(const void *sl, const void *s2, size_t n); | compares the first n bytes of the object pointed to by s1 and s2.

void *memchr(const void s, inc c, size_t); | locates the first occurrence of c in the first n bytes of the object pointed by s.

void *memset( void *s, int c, size_t); |copies the first n bytes of the object pointed to by s

char *strerror(int errornum); | maps errornum into a full text string in a complier- specific manner. error numbers are defined in errno.h

size_t strlen(const char *s); | determines the length of string s.
*/

/*
    char s1[20];
    char s2[] = "Copy this one";

    memcpy (s1, s2, 10);

    printf("The s2 contains: \"%s\"",s1);



char x[] = "Home Sweet Home";

printf("The string before memmove is %s\n", x);
printf("The string after memmove is %s\n", (char*)memmove(x,&x[5],10));



char s[] = "AAAAAAAAAAAA";

printf("The string before memset is %s\n", s);
printf("The string after memset is %s\n", (char*) memset(s,'a',7));

/*
char *x = "AAAAAAAAAAAAAA";

printf("The length of the string is %u\n", strlen(x));
*/
}
