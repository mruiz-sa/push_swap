/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:15:46 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/11 09:53:02 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ra(int *stack_a, int *stack_a_nbrs)
{
	int	i;
	int	tmp;

	tmp = stack_a[0];
	i = 0;
	while (i < *stack_a_nbrs - 1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i] = tmp;
	write(1, "ra\n", 3);
}

void	rb(int *stack_b, int *stack_b_nbrs)
{
	int	i;
	int	tmp;

	tmp = stack_b[0];
	i = 0;
	while (i < *stack_b_nbrs - 1)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i] = tmp;
	write(1, "rb\n", 3);
}

void	rr(int *stack_a, int *stack_b, int *stack_a_nbrs, int *stack_b_nbrs)
{
	int	i;
	int	tmp;

	tmp = stack_a[0];
	i = 0;
	while (i < *stack_a_nbrs - 1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i] = tmp;
	i = 0;
	tmp = stack_b[0];
	i = 0;
	while (i < *stack_b_nbrs - 1)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i] = tmp;
	write(1, "rr\n", 3);
}
