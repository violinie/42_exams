/*Assignment name  : snake_to_camel
Expected files   : snake_to_camel.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

Examples:
$>./snake_to_camel "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] == '_')
			{
				argv[1][i+1] = argv[1][i+1] - 32;
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	return(0);
}
