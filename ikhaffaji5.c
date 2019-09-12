/*
 Ivan Khaffaji
 CSC/ITC-251
 9/11/19
 Lab #5
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ones=0, twos=0, threes=0, fours=0, fives=0, sixes=0, sevens=0, eights=0, nines=0, tens=0;
int userPrompt(void);
void randGen(int timesRolled);
void printResults(void);

int main(void)
{	
	srand(time(NULL));

	int timesRolled = userPrompt();
	randGen(timesRolled);
	printResults();

	return EXIT_SUCCESS;
}

int userPrompt(void)
{
	int timesRolled=0;
	printf("How many times would you like to roll the 10-sided die? ");
	scanf(" %d", &timesRolled);
	return timesRolled;
}

void randGen(int timesRolled)
{
	int i=0,x=0;
	int rolled = timesRolled;

	for(i=0; i<rolled; i++)
	{
		x = 1 + (rand() % 10);

		switch(x)
		{
			case 1:
				ones++;
				break;
			case 2:
				twos++;
				break;
			case 3:
				threes++;
				break;
			case 4:
				fours++;
				break;
			case 5:
				fives++;
				break;
			case 6:
				sixes++;
				break;
			case 7:
				sevens++;
				break;
			case 8:
				eights++;
				break;
			case 9:
				nines++;
				break;
			case 10:
				tens++;
				break;

		}
	}
}

void printResults(void)
{
	printf("You had:\n");
	printf("%d ones\n", ones);
	printf("%d twos\n", twos);
	printf("%d threes\n", threes);
	printf("%d fours\n", fours);
	printf("%d fives\n", fives);
	printf("%d sixes\n", sixes);
	printf("%d sevens\n", sevens);
	printf("%d eights\n", eights);
	printf("%d nines\n", nines);
	printf("%d tens\n", tens);

}
