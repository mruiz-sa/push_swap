/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:15:19 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/11 09:52:43 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	rra(int *stack_a, int *stack_a_nbrs)
{
	int	i;
	int	tmp;

	i = *stack_a_nbrs - 1;
	tmp = stack_a[i];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(int *stack_b, int *stack_b_nbrs)
{
	int	i;
	int	tmp;

	i = *stack_b_nbrs - 1;
	tmp = stack_b[i];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = tmp;
	write(1, "rrb\n", 4);
}

void	rrr(int *stack_a, int *stack_b, int *stack_a_nbrs, int *stack_b_nbrs)
{
	int	i;
	int	tmp;

	i = *stack_a_nbrs - 1;
	tmp = stack_a[i];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = tmp;
	i = *stack_b_nbrs - 1;
	tmp = stack_b[i];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = tmp;
	write(1, "rrr\n", 4);
}
