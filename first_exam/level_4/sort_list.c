/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 21:27:03 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/16 15:14:15 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}
*/

#include <stdio.h>
#include "list.h"

/*typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

int cmp(int a, int b)
{
	return (a <= b);
}*/

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*start = lst; // we need to store the head
	int		tmp; // temp for shifting the values
	int		sorted = 0; // boolean

	if (!lst) // is there even something?
		return (NULL);

	while (!sorted) // do it, until its sorted
	{
		sorted = 1; // its sorted, cause of the things inside
		lst = start; // reset lst to start
		while (lst->next) // until there are numbers
		{
			if (!cmp(lst->data, lst->next->data)) // [4] [2] [3] ==> !cmp(4, 2) ==> ascending ==> is 4 <= 2 ? true(1) dont sort : false(0) sort
			{
				tmp = lst->data; // temporary 4
				lst->data = lst->next->data; // 4 = 2
				lst->next->data = tmp; // 2 = 4
				sorted = 0; // still not sorted, because we are not at the end of the data
			}
			lst = lst->next; // move to the next number ==> 2 comparing with 3 next round
		}
	}
	return (start);
}

/*int main(void)
{
	t_list a = {4};
	t_list b = {2};
	t_list c = {3};

	a.next = &b;
	b.next = &c;

	t_list *sorted = sort_list(&a, cmp);

	while (sorted)
	{
		printf("%d ", sorted->data);
		sorted = sorted->next;
	}
	printf("\n");

	return 0;
}*/
