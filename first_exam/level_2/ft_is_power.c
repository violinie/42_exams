/*Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);*/

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	int	test_num = 1;
	while(test_num <= n)
	{
		test_num = test_num * 2;
		if(test_num == n || n == 1)
			return(1);
	}
	return (0);
}

int	main(void)
{
	printf("%d", is_power_of_2(1));
	return(0);
}
