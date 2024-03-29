/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_nbrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:13:33 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/07 20:36:03 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_and_rotate(int *stack_a, int *stack_a_nbrs, int *stack_b,
	int *stack_b_nbrs)
{
	pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
	ra(stack_a, stack_a_nbrs);
}

void	second_step(int *stack_a, int *stack_a_nbrs, int *stack_b,
	int *stack_b_nbrs)
{
	if (stack_b[0] < stack_a[0])
		pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
	else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
	{
		pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
		sa(stack_a, stack_a_nbrs);
	}
	else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
	{
		ra(stack_a, stack_a_nbrs);
		pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
		sa(stack_a, stack_a_nbrs);
		rra(stack_a, stack_a_nbrs);
	}
	else if ((stack_b[0] > stack_a[2]) && (stack_b[0] < stack_a[3]))
	{
		rra(stack_a, stack_a_nbrs);
		pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
		ra(stack_a, stack_a_nbrs);
		ra(stack_a, stack_a_nbrs);
	}
	else if (stack_b[0] > stack_a[3])
		push_and_rotate(stack_a, stack_a_nbrs, stack_b, stack_b_nbrs);
}

void	first_step(int *stack_a, int *stack_a_nbrs, int *stack_b,
	int *stack_b_nbrs)
{
	if (stack_b[0] < stack_a[0])
		pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
	else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
	{
		pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
		sa(stack_a, stack_a_nbrs);
	}
	else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
	{
		rra(stack_a, stack_a_nbrs);
		pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
		ra(stack_a, stack_a_nbrs);
		ra(stack_a, stack_a_nbrs);
	}
	else if (stack_b[0] > stack_a[2])
	{
		pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
		ra(stack_a, stack_a_nbrs);
	}
}

void	sort_5_nbrs(int *stack_a, int *stack_a_nbrs, int *stack_b,
	int *stack_b_nbrs)
{
	pb(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
	pb(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
	sort_3_nbrs(stack_a, stack_a_nbrs);
	while (*stack_b_nbrs != 0)
	{
		if (*stack_a_nbrs == 3)
			first_step(stack_a, stack_a_nbrs, stack_b, stack_b_nbrs);
		else if (*stack_a_nbrs == 4)
			second_step(stack_a, stack_a_nbrs, stack_b, stack_b_nbrs);
	}
}
