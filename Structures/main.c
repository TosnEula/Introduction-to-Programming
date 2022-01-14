#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/*Lesson 01 - Structures I
Structure (aggregates) - Collection of related variables under one name
struct card{ char *face;
             char *suit;
            }
Structure Members - Members of the same structure must have unique names however, two different structures may contain members of the same name.
                    They can be of the primitive data types or aggregates(arrays, or other structures)

struct employee { char firstName[20];
                  char firstName[20];
                  unsigned int age;
                  Double salary;
                  struct employee person; (doesn't work)
                  struct employee *personPtr; (Works)
                }
Self-referential structure - A structure cannot contain an instance of itself
                             A structure containing a member that's a pointer to the same structure type is reffered to a self -referential structure

type name;
1. struct card acard, deck[52], *cardPtr; (defining variables)


2. struct card{ char* face;
             char* suit;
           } a card, deck[52], *cardPtr;
NOTE: tag name is optional

 OPEARTIONS
 -assigning structure variables to structure variables of the same type.
 -ttalking the address(&) of a structure variable
 -access members of a structure variable
 - using sizeof

 INITIALIZING STRUCTURES
 struct card aCard = {"Three"(char *face),"Hearts"(char *suit)};

 ACCESSING STRUCTURE MEMBERS
 - Structure member operator (.)
    printf("%s", aCard.suit);

- Structure pointer operator (->)
    printf("%s", aCard->suit);  or (*cardPtr).suit
*/
/*
struct card {char* face;
            char * suit;
            };
int main()
{
    struct card aCard;
    aCard.face = "Ace";
    aCard.suit = "Spades";
    struct card *cardPtr;
    cardPtr = &aCard;

    printf("%s", aCard.suit);
    printf("\n%s" , cardPtr ->face);
    printf("\n%s",(*cardPtr).face);
    return 0;
}

*/
/*
#define CARDS 52
#define FACES 13

struct card
{
    const char *face;
    const char *suit;
};
typedef struct card Card;

void filldeck(Card* const wDeck, const char * wFace[], const char * wSuit[])
{
    for (int i = 0; i<CARDS; i++)
    {
        wDeck[i].face = wFace[i % FACES];
        wDeck[i].suit = wSuit[i/FACES];
    }
}
void shuffle(Card* const wDeck)
{
    for (int i = 0; i < CARDS; i++)
    {
        int j = rand() % CARDS;
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

void deal (const Card * const wDeck)
{
    for (int i = 0; i < CARDS; i++)
    {
    printf("%s of %s \n", wDeck[i].face, wDeck[i].suit );
    }
}

int main ()
{
    Card deck[CARDS];

    const char * face [] = {"Ace", "Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
    const char * suit [] = {"Hearts","Diamonds","Spades","Clubs"};

    srand(time(NULL));

    filldeck(deck,face,suit);
    shuffle(deck);
    deal(deck);

}
*/
/*
union number
{
    int x;
    double y;
};

int main ()
{
    union number value;

    value.x = 70;
    printf("int: %d\n", value.x);
    printf("double: %f\n\n", value.y);

    value.y = 70.0;
    printf("int: %d\n", value.x);
    printf("double: %f", value.y);
}
*/
