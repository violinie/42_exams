/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);*/

#include <stdio.h>

char *ft_strcpy(char *dest, const char *src)
{
    unsigned int i = 0;

    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

int main(void)
{
    char dest[] = " ";
    char src[] = "source to destination";
    printf("%s\n", ft_strcpy(dest, src));
    return (0);
}
