#include<stdio.h>
/**
 * main- block
 * Description: print two two numbers
 * Return: 0
 */
int main(void)
{
int b, c;
for (b = 0; b < 100; b++)
{
for (c = 0; c < 100; c++)
{
if (b < c)
{
putchar((b / 10) + 48);
putchar((b % 10) + 48);
putchar(' ');
putchar((c / 10) + 48);
putchar((c % 10) + 48);
if (b != 98 || c != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
