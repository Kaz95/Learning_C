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

	return 0;
}
