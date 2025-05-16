/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 22:38:19 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/16 00:55:00 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc >= 2)
	{
		int	i = 0;
		int	start;
		int	end;

		while (argv[1][i] == ' ' || argv[1][i] == '\t') // trim start spaces
			i++;
		start = i;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
        	i++;
		end = i;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
        	i++;
		int	printed = 0;
		while(argv[1][i])
		{
			if(((argv[1][i] == ' ') && (argv[1][i+1] == ' ')) || ((argv[1][i] == ' ') && (argv[1][i+1] == '\0')))
				i++;
			else
			{
				write(1, &argv[1][i], 1);
				printed = 1;
				i++;
			}
		}
		if (printed)
			write(1, " ", 1);
		while(start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
