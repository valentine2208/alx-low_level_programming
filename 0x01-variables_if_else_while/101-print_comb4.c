#include<stdio.h>
/**
 * main- Block
 * Description: whatever
 * Return: 0
 */
int main(void)
{
int i, j, k;
for (i = 48; i < 58; i++)
{
for (j = 49; i < 58; j++)
{
for (k = 50; i < 58; k++)
{
if (k > j && j > i)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
