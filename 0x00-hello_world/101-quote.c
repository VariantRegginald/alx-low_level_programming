#include <string.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - doing well
 * Return: 0 retu
 */

int main(void)
{
	int s;

	s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
