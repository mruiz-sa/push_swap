/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:51:45 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/07 20:36:03 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include "../include/push_swap.h"

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

void	copy_stack(int *copy, int *stack_a, int *stack_a_nbrs)
{
	int	i;

	i = 0;
	while (i < *stack_a_nbrs)
	{
		copy[i] = stack_a[i];
		i++;
	}
}

void	start_algorithm(int *stack_a, int *stack_a_nbrs, int *stack_b,
	int *stack_b_nbrs)
{
	int	*copy;

	(void)stack_b;
	(void)stack_b_nbrs;
	copy = (int *)malloc(sizeof(int) * *stack_a_nbrs);
	copy_stack(copy, stack_a, stack_a_nbrs);
	sort_copy(copy, stack_a_nbrs);
}
