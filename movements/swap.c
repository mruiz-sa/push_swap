/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:11:00 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/07 20:36:03 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include "../include/push_swap.h"

void	sa(int *stack_a, int *stack_a_nbrs)
{
	int	tmp;

	if (*stack_a_nbrs > 1)
	{
		tmp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = tmp;
	}
	write(1, "sa\n", 3);
}

void	sb(int *stack_b, int *stack_b_nbrs)
{
	int	tmp;

	if (*stack_b_nbrs > 1)
	{
		tmp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = tmp;
	}
	write(1, "sb\n", 3);
}

void	ss(int *stack_a, int *stack_b, int *stack_a_nbrs, int *stack_b_nbrs)
{
	int	tmp;

	if (*stack_a_nbrs > 1)
	{
		tmp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = tmp;
	}
	if (*stack_b_nbrs > 1)
	{
		tmp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = tmp;
	}
	write(1, "ss\n", 3);
}
