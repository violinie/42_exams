/*Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);*/

// STRing DUPlicate

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src){
	char	*dup;
	int	len = 0;
	// get length and malloc dup
	while(src[len])
		len++;
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	// copy from src to dup
	len = 0;
	while(src[len])
	{
		dup[len] = src[len];
		len++;
	}
	dup[len] = '\0';

	return (dup);
}

int	main(void)

{
	char	src[] = "source";
	printf("%s", ft_strdup(src));
	return (0);
}
