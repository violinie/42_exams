/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);*/

// STRing REVerse

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int	len = 0;
	int	i = 0;
	char	*reverse;
	while(str[len])
		len++;
	reverse = (char *)malloc(len + 1);

	while(len > 0)
	{
		reverse[i] = str[len - 1];
		len--;
		i++;
	}
	reverse[i] = '\0';
	return (char *)reverse;
}

int	main(void)
{
	char	str[] = "enod";

	printf("%s", ft_strrev(str));
	return(0);
}
