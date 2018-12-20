#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	typedef struct Card
	{
		char *face;
		char *suit;
	}Card;
	Card acard;
	Card *cardptr;
	acard.face = "Ace";
	acard.suit = "Spades";
	cardptr = &acard;
	printf("%s%s%s\n%s%s%s\n%s%s%s\n", acard.face, " of ", acard.suit, 
		cardptr->face," of ",cardptr->suit,(*cardptr).face," of ",(*cardptr).suit);
	system("pause");
	return 0;
}