/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:20:33 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/07 20:39:12 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include "../include/push_swap.h"

void	pa(int *stack_a, int *stack_b, int *stack_a_nbrs, int *stack_b_nbrs)
{
	int	i;

	i = *stack_a_nbrs;
	*stack_a_nbrs = *stack_a_nbrs + 1;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < *stack_b_nbrs)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	*stack_b_nbrs = *stack_b_nbrs - 1;
	if (*stack_b_nbrs == 0)
		stack_b = 0;
	write(1, "pa\n", 3);
}

void	pb(int *stack_a, int *stack_b, int *stack_a_nbrs, int *stack_b_nbrs)
{
	int	i;

	i = *stack_b_nbrs;
	*stack_b_nbrs = *stack_b_nbrs + 1;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (i < *stack_a_nbrs && *stack_a_nbrs - i != 1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	*stack_a_nbrs = *stack_a_nbrs - 1;
	if (*stack_a_nbrs == 0)
		stack_a = 0;
	write(1, "pb\n", 3);
}
