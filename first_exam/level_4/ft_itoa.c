/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:43:04 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/16 13:07:40 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <stdio.h>

int	ft_count_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int i;
	int	num = nbr;
	int	len = ft_count_len(nbr);
	char	*result = malloc(sizeof(char) * (len + 1));
	if(!result)
		return NULL;
	result[len] = '\0';
	i = len - 1;
	if(num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	while(num > 9)
	{
		result[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	result[i] = num + '0';
	return(result);
}

int	main(void)
{
	printf("%s", ft_itoa(-230));
}

