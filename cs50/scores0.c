#include <stdio.h>
#include <stdlib.h>

void chart(int score);

void main(void)
{
	char score1[4];
	char score2[4];
	char score3[4];
	printf("Score 1: ");
	fgets(score1, 5, stdin);

	printf("Score 2: ");
	fgets(score2, 5, stdin);

	printf("Score 3: ");
	fgets(score3, 5, stdin);

	int int_score1 = atoi(score1);
	int int_score2 = atoi(score2);
	int int_score3 = atoi(score3);

	printf("Score 1: ");
	chart(int_score1);

	printf("Score 2: ");
	chart(int_score2);

	printf("Score 3: ");
	chart(int_score3);
}

void chart(int score)
{
	for(int i = 0; i < score; i++)
	{
		printf("#");
	}
	printf("\n");
}
