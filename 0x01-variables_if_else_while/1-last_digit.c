#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main- entry point
 * Discription
 * Return: 0 on success
 */
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*my code goes here*/
digit = n % 10;/*gets the digit value*/
if (digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, digit);
else if (digit == 0)
printf("Last digit of %d is %d and is 0\n", n, digit);
else if (digit < 6 && digit != 0)
printf("Last digit of %d is %d and is less  than 6 and not 0\n", n, digit);
return (0);
