#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() 
{
	char c = (rand() % 25) + 65; //gets random number between 65 and 90 for Ascii values
	return c;
}