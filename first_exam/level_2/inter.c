/*Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	p = 0;
	int printed[256] = {0};

	if(argc == 3)
	{
		while(argv[2][p] && argv[1][i]) // while we have letters in string 2 and at the same time we have letters in our string 1
		{
			while(argv[1][i]) // loop throught string 1 and compare it with string
			{
				if (argv[1][i] == argv[2][p]) // match found?
				{
					if (!printed[(unsigned char)argv[1][i]]) // already printed?
					{
						write(1, &argv[1][i], 1);
						printed[(unsigned char)argv[1][i]] = 1; // mark as printed
					}
					break;
				}
				p++;
			}
			i++;
			p = 0;
		}
	}
	write(1, "\n", 1);
	return(0);
}

/*
1. check the first letter of string 1, compare it with all of the letters in string 2
2. is the letter there? Write it. Or not...
3. move to the next letter in string 1
4. before writing it... check, if its different than the previous letters in string 1
*/
