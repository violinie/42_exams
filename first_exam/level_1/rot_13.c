/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:39:23 by hanacop           #+#    #+#             */
/*   Updated: 2025/02/12 14:22:36 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 77) ||
			(argv[1][i] >= 97 && argv[1][i] <= 109))
				argv[1][i] = argv[1][i] + 13;
			else if ((argv[1][i] >= 77 && argv[1][i] <= 122) ||
			(argv[1][i] >= 109 && argv[1][i] <= 122))
				argv[1][i] = argv[1][i] - 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	return (0);
}
