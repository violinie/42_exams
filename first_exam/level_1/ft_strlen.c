/*Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);*/

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

int	main(void)
{
	char str[] = "aha";
	printf("%d\n", ft_strlen(str));
	return (0);
}
