/*Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$*/

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	z = 0;

	if(argc == 3)
	{
		while(argv[2][i] && argv[1][z])
		{
			if(argv[1][z] == argv[2][i])
				z++;
			i++;
		}
		if (argv[1][z] == '\0')
			write(1, argv[1], z);
	}
	write(1, "\n", 1);
	return(0);
}
