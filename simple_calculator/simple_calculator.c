#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */

int main(void)
{
	double num1;
	double num2;

	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);

	printf("Answer: %f\n", num1 + num2);

	return (0);
}
