#include <stdio.h>

int main()
{
	float num1, num2, sum, differ, multip, division;
	    printf("enter number 1! \n");
		scanf_s("%f", &num1);
	    printf("enter number 2! \n");
		scanf_s("%f", &num2);
		sum = num1 + num2;
		differ = num1 - num2;
		multip = num1 * num2;
		if (num2 != 0) {
			division = num1 / num2;
			printf("Sum of numbers = %f\n ", sum);
			printf("The difference of numbers = %f\n ", differ);
			printf("Product of numbers = %f\n ", multip);
			printf("Fraction of numbers = %f\n ", division);
		}
		else {
			printf("Unable to execute\n");
		}
		return 0;
}