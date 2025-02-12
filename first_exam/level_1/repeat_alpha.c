/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		int	i = 0;
		int	upperHelper = 64;
		int lowerHelper = 96;
		while (argv[1][i])
		{
			bool upper = (argv[1][i] >= 65 && argv[1][i] <= 90);
			bool lower = (argv[1][i] >= 97 && argv[1][i] <= 122);
			if(upper)
			{
				int multiplicator = argv[1][i] - upperHelper;
				int z = 0;
				while (z != multiplicator)
				{
					write(1, &argv[1][i], 1);
					z++;
				}
			}
			if(lower)
			{
				int multiplicator = argv[1][i] - lowerHelper;
				int z = 0;
				while (z != multiplicator)
				{
					write(1, &argv[1][i], 1);
					z++;
				}
			}
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
