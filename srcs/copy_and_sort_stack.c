/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_and_sort_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:28:48 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/11 09:49:11 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "../include/push_swap.h"

void	index_stack(int *stack_a_nbrs, int *copy, int *sorted_copy,
	int *stack_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < *stack_a_nbrs)
	{
		j = 0;
		while (j < *stack_a_nbrs)
		{
			if (sorted_copy[i] == copy[j])
					stack_a[i] = j;
			j++;
		}
		++i;
	}
}

void	sort_copy(int *copy, int *stack_a_nbrs)
{
	int	i;
	int	tmp;
	int	swap;

	swap = 1;
	while (swap == 1)
	{
		i = 0;
		swap = 0;
		while (i < *stack_a_nbrs - 1)
		{
			if (copy[i] > copy[i + 1])
			{
				tmp = copy[i];
				copy[i] = copy[i + 1];
				copy[i + 1] = tmp;
				swap = 1;
			}
			i++;
		}
	}
}

void	copy_stack(int *copy, int *sorted_copy, int *stack_a, int *stack_a_nbrs)
{
	int	i;

	i = 0;
	while (i < *stack_a_nbrs)
	{
		copy[i] = stack_a[i];
		sorted_copy[i] = stack_a[i];
		i++;
	}
}

void	copy_and_sort_stack(int *stack_a, int *stack_a_nbrs)
{
	int	*copy;
	int	*sorted_copy;

	copy = (int *)malloc(sizeof(int) * *stack_a_nbrs);
	sorted_copy = (int *)malloc(sizeof(int) * *stack_a_nbrs);
	copy_stack(copy, sorted_copy, stack_a, stack_a_nbrs);
	sort_copy(copy, stack_a_nbrs);
	index_stack(stack_a_nbrs, copy, sorted_copy, stack_a);
	free(copy);
	free(sorted_copy);
}
