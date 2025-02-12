/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:18:43 by hanacop           #+#    #+#             */
/*   Updated: 2025/02/12 17:40:03 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	z;
 
	i = 0;
	z = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if ((argv[1][i] >= 65) && (argv[1][i]) <= 90)
			{
				z = argv[1][i] - 65;
				argv[1][i] = 90 - z;
			}
			else if ((argv[1][i] >= 97) && (argv[1][i]) <= 122)
			{
				z = argv[1][i] - 97;
				argv[1][i] = 122 - z;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
