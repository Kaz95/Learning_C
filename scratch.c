/* This is a scratch file
 * Will be used to solidify understanding of basic C Programming concepts
 */

// I can also write comments by using double backslash on compilers thats support C99.


#include <stdio.h>

// In C boolean values are represented by numbers. To C, the number 0 is the value for false.
// Anything that is not equal to 0 is treated as true.
// If true can be used as a shorthand method for checking for non 0 values.

main() 
{
	int num = 5;
	
	// The && operator is efficient
	// If the first condition is false
	// Second conditioni will not be evaluated

	if ((num < 6) && (num > 4))
		printf("The Number is 5\n");
	
	// Likewise the ||(or) operator will not 
	// evaluate further arguments if one already has returned true

	if ((1 < 2) || (2 < 1))
		printf("One of them is True\n");

	// ! represents the not operator in C
	// The not operator reverses the value of a condition
	
	if (!0)
		printf("!0 Evaluates to True in C\n");
	
	// Switch statements are like if statements that test a single variable for multiple values.
	// When the computer hits a switch statementm, it checks the value it was given, and then
	// looks for a matching case. When it finds one, it runs all of the code that follows.
	// The computer keeps going until it is told to break out of switch statement or statement ends.
	// Most C programs have a break at the end of each case section to make the code easier to understand,
	// even at the cost of efficiency.
	
	int train = 65;
	int winnings = 0;
	
	switch(train) {
	
	case 37:

		winnings = winnings + 50;
		
		break;

	case 65:

		puts("Jackpot!");

		winnings = winnings + 80;

	case 12:

		winnings = winnings + 20;

		break;
	
	default:

		winnings = 0;

	}

	printf("Your total winnings are: %i\n", winnings);

	return 0;
}
