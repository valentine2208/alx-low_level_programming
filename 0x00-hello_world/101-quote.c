#include<unistd.h>
/**
 * main- entry point for the program.
 *
 * Return: error 1, non one otherwise
 *
 */
int main(void)
{
char quo[] = "and that peice of art is useful\" - Dora Korper, 2015-10-19\n";
write(1, quo, 59);
return (1);
}
