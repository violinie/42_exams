/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:37:14 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/01 14:09:31 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
