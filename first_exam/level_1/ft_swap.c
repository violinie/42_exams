/*Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);*/

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	printf("%d\n", *a);
	printf("%d\n", *b);
}

int	main(void)
{
	int a = 1;
	int b = 3;
	ft_swap(&a, &b);
	return (0);
}
