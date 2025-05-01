/*Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.*/

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int	i = 0;
	int	count = 0;
	int	result = 0;
	if(len > 0)
	{
		while(count < len)
		{
			if(result < tab[i])
				result = tab[i];
			count++;
			i++;
		}
		return(result);
	}
	return (0);
}

int	main(void)
{
	int tab[] = {1, 8, 5, 6, 2};
	printf("%d", max(tab, 5));
	return(0);
}
