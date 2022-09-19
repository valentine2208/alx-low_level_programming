#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main- Block
 * Description: reverse alphabet
 * Return: 0
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
