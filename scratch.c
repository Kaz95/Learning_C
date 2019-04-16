/* This is a scratch file
 * Will be used to solidify understanding of basic C Programming concepts
 */

// I can also write comments by using double backslash on compilers thats support C99.


#include <stdio.h>

// In C boolean values are represented by numbers. To C, the number 0 is the value for false.
// Anything that is not equal to 0 is treated as true.
// If true can be used as a shorthand method for checking for non 0 values.


// Function that returns void(nothing)
// Adds 1 to a given integer variable
// Will be used to understand pointers
void add_one(int *some_num)
{
	// Parenthesis are required to increment dereferenced pointer
	(*some_num)++;
}

main() 
{	
	// Define and initialize an integer variable
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
	
	// 'While' loops decide how many times a block of will run
	
	int counter = 0;

	while (counter < 3) {

		printf("The current count is: %i\n", counter);
		
		counter++;
	}

	// C also has 'do while' loops. Loops will always execute atleast once.
	
	counter = 1;

	do {
		printf("This 'do while' will always run once.\nThe check doesn't happen until the end of each pass\n");

	} while (counter == 2);
	
	// C also includes 'for' loops'.
	// For loops provide an easy method for repeating a given piece of code multiple times.
	
	for (counter = 1; counter < 4; counter++) {

		printf("The current count is %i\n", counter);
	}
	
	int x = 4;

	// If I don't use a pointer variable the add_one function will not work correctly
	// C doesn't pass variable references like python, it copies the value of a given variable.
	// Then assigns it to a new local variable.
	add_one(&x);
	
	printf("x is equal to %i\n", x);


	return 0;
}
