#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main- Block
 * Description: numders of base 10
 * Return: 0
 */
int main(void)
{
char c = 0;
while (c < 10)
{
putchar(48 + c);
c++;
}
putchar('\n');
return (0);
}
