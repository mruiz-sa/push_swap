/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_convert_args_utils.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:43:39 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/05 18:33:47 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	convert_unique_arg(int *stack_a, int *stack_a_nbrs, char **av,
	char **nbrs)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	nbrs = ft_split(av[1], ' ');
	while (nbrs[i])
	{
		size++;
		i++;
	}
	*stack_a_nbrs = size;
	i = 0;
	while (i < size)
	{
		stack_a[i] = ft_atoi(nbrs[i]);
		i++;
	}
	free_array(nbrs);
	free(nbrs);
}

void	convert_all_args(int *stack_a, int *stack_a_nbrs, char **av)
{
	int	i;

	i = 0;
	while (i < *stack_a_nbrs)
	{
		stack_a[i] = ft_atoi(av[i + 1]);
		i++;
	}
}

void	convert_input(int *stack_a, int *stack_a_nbrs, char **av)
{
	char	**nbrs;

	nbrs = 0;
	if (*stack_a_nbrs == 1)
		convert_unique_arg(stack_a, stack_a_nbrs, av, nbrs);
	else
		convert_all_args(stack_a, stack_a_nbrs, av);
}
