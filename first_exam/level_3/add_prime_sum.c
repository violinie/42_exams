/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:00:28 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/06 16:00:29 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>*/

#include <unistd.h>

int	is_prime(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	sum_primes(int n)
{
	int i = 2;
	int sum = 0;

	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	return (sum);
}

void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int res = 0;
	int i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	int	result = 0;

	if (argc == 2)
	{
		int n = ft_atoi(argv[1]);
		result = sum_primes(n);
		ft_putnbr(result);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}

