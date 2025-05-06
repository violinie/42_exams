/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:00:19 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/06 16:00:20 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	last_char = 0;

	if (argc == 2)
	{
		// skip leading spaces
		while (argv[1][i] == ' ')
			i++;
		// find last non-space character
		while (argv[1][last_char])
			last_char++;
		last_char--;
		while (last_char >= 0 && argv[1][last_char] == ' ')
			last_char--;

		while (i <= last_char)
		{
			if (argv[1][i] == ' ')
			{
				write(1, "   ", 3);
				while (argv[1][i] == ' ')
					i++;
			}
			else
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
