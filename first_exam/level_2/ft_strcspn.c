/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:37:14 by hanacop           #+#    #+#             */
/*   Updated: 2025/04/29 18:40:41 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);*/

// STRing Complement SPaN

#include <stdio.h>

int	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t r = 0;
	while(s[i])
	{
		while(reject[r])
		{
			if(s[i] == reject[r])
					return i;
			r++;
		}
		r = 0;
		i++;
	}
	return i;
}

int	main(void)
{
	char	*s = "hello";
	char	*reject = "o";

	printf("%d", ft_strcspn(s, reject));
	return (0);
}
