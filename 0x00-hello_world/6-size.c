#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of char: %li byte(s)\n", sizeof(char));
	printf("Size of int: %li byte(s)\n", sizeof(int));
	printf("Size of long int: %li byte(s)\n", sizeof(long int));
	printf("Size of long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of float: %li byte(s)\n", sizeof(float));
	return (0);
}
