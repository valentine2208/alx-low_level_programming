#include<stdio.h>
#include<stdlib.h>
/**
 * main- Block
 * Discription: whatever
 * Return: 0
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
