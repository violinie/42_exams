/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);*/

// STRing Pointer to BReakset

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	size_t	i = 0;
	size_t	l = 0;
	while(s1[i])
	{
		while(s2[l])
		{
			if(s1[i] == s2[l])
				return (char *)&s1[i];
			l++;
		}
		l = 0;
		i++;
	}
	return NULL;
}

int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "sdeo";

	printf("%s", ft_strpbrk(s1, s2));
	return(0);
}
