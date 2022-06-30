/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:10:42 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/06/30 16:44:05 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_args(int ac, char **av, int *stack_a_nbrs, int *stack_b_nbrs)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac < 2)
		free_and_exit(stack_a_nbrs, stack_b_nbrs);
	while (i < ac)
	{
		if ((av[i][0] == ' ') || (av[i][ft_strlen(av[i]) - 1] == ' '))
			error_and_exit(stack_a_nbrs, stack_b_nbrs);
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] < 48 || av[i][j] > 57) && av[i][j] != 32
				&& av[i][j] != 45)
				error_and_exit(stack_a_nbrs, stack_b_nbrs);
			if ((av[i][j] == 32) && (av[i][j + 1] == 32))
				error_and_exit(stack_a_nbrs, stack_b_nbrs);
			j++;
		}
		i++;
	}
}

void	set_stack_nbrs(int	*stack_a_nbrs, int *stack_b_nbrs, int ac)
{
	stack_a_nbrs[0] = ac - 1;
	stack_a_nbrs[1] = stack_a_nbrs[0];
	*stack_b_nbrs = 0;
}

int	stack_size(int ac, char **av)
{
	int	i;
	int	size;

	i = 0;
	size = 1;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == ' ')
				size++;
			i++;
		}
	}
	else
		size = ac - 1;
	return (size);
}
