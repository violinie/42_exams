/*Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);*/

// STRing SPaN

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;
	size_t	a;
	int		found;

	while (s[i])
	{
		a = 0;
		found = 0;
		while (accept[a])
		{
			if (s[i] == accept[a])
			{
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
			break;
		i++;
	}
	return i;
}

int	main(void)
{
	char	s[] = "123Xabc";
	char	accept[] = "123";
	printf("%ld", ft_strspn(s, accept));
	return (0);
}
