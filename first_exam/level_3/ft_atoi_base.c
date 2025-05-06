/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:00:15 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/06 16:00:15 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);*/

#include <stdio.h>

int	convert_char(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;
	int	value;

	if (str[0] == '-')  // handle negative
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		value = convert_char(str[i]);  // get digit's value

		if (value == -1 || value >= str_base)  // is it valid?
			break;

		result = result * str_base + value;  // base math
		i++;
	}

	return (result * sign);
}
int main(void)
{
	// Example 1: hexadecimal "1A" = 26
	printf("%d\n", ft_atoi_base("1A", 16));

	// Example 2: binary "1010" = 10
	printf("%d\n", ft_atoi_base("1010", 2));

	// Example 3: base 4 "123" = (1×16) + (2×4) + 3 = 27
	printf("%d\n", ft_atoi_base("123", 4));

	// Example 4: negative value
	printf("%d\n", ft_atoi_base("-1f", 16));

	return 0;
}
