/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:07:58 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/07 13:55:17 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.*/

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	i = 0;

	if((end - start) > 0)
		len = (end - start) + 1;
	else
		len = (start - end) + 1;

	int *range = malloc(len * sizeof(int));
	if (!range)
		return (NULL);
	while (i < len)
	{
		if(start <= end)
			range[i] = start + i;
		else
			range[i] = start - i;
		i++;
	}
	return (range);
}

int	main(void)
{
	int *arr = ft_range(-1, 2);
	int i = 0;
	int len = 2 - (-1) + 1;

	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}

