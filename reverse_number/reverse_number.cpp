#include <stdio.h>
#include <stdlib.h>
void main()
{
	int number, right_digit;
	scanf_s("%i", &number);
	while (number != 0)
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number /= 10;
		}
	printf("\n");
	system("pause");
}