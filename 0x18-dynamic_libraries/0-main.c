#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * _isupper - a function that checks for uppercase characters
 * @c: a variable that stores the letters
 * Return: Return 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return (EXIT_SUCCESS);
>>>>>>> be5c301a918c2a5b2317c356e2fddea39675fe89
}
