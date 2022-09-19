#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main- block
 * Description: whatever
 * Return: 0
 */
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
