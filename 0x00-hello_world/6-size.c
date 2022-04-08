#include <stdio.h>


/**
 * main - First function executed 
 *
 * Return: always 0
 */
int main(void)
{
	char x;
	float y;
	int z;
	long int a;
	long long int b;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(x));
	printf("Size of a int: %lu byte(s)", (unsigned long)sizeof(y));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(z));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(a));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(b));
	return (0); 
} 
