/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pcgc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 21:35:08 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/15 22:29:20 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if(argc == 3)
	{
		int value1 = atoi(argv[1]);
		int value2 = atoi(argv[2]);
		int	denominator;
		if(value1 >= value2)
		{
			denominator = value1;
			while(denominator)
			{
				if(((value1 % denominator) == 0) && ((value2 % denominator) == 0))
				{
					printf("%d\n", denominator);
					break ;
				}
				denominator--;
			}
		}
		else if(value2 >= value1)
		{
			denominator = value2;
			while(denominator)
			{
				if(((value1 % denominator) == 0) && ((value2 % denominator) == 0))
				{
					printf("%d\n", denominator);
					break ;
				}
				denominator--;
			}
		}
		printf("%s", "\n");
	}
	else
		printf("%s", "\n");
	return(0);
}
