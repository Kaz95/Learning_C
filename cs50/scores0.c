#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char score1[101];
	puts("Score 1: ");
	fgets(score1, 100, stdin);
	int int_score = atoi(score1);

	printf("Score 1: ");
	for (int i = 0; i < int_score; i++)
	{
		printf("#");
	}
	printf("\n");

	printf("Score 2: ");
	printf("Score 3: ");
}

