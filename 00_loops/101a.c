#include <stdio.h>

/* A program that continually reads and display character inputs from user
* terminates when the character 'x' is entered
*/

int main()
{
	int c;

	c = ' ';
	printf("Enter a character:\n(enter x to exit)\n");

	while (c != 'x') {
		c = getc(stdin);
		putchar(c);
	}
	return 0;
}
