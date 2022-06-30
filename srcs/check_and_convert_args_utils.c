/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_convert_args_utils.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:43:39 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/06/30 18:35:55 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	convert_unique_arg(int *stack_a, int *stack_a_nbrs, char **av, char **nbrs)
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
	stack_a_nbrs[0] = size;
	stack_a_nbrs[1] = size;
	i = 0;
	while (i < size)
	{
		stack_a[i] = ft_atoi(nbrs[i]);
		i++;
	}
	free_array(nbrs);
	free(nbrs);
	return (0);
}

int	convert_all_args(int *stack_a, int *stack_a_nbrs, char **av)
{
	int	i;

	i = 0;
	while (i < stack_a_nbrs[0])
	{
		if (check_no_characters(av[i + 1]) == 1)
			stack_a[i] = ft_atoi(av[i + 1]);
		else
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	check_input(int *stack_a, int *stack_a_nbrs, char **av)
{
	char	**nbrs;

	nbrs = 0;
	if (stack_a_nbrs[0] == 1)
	{
		if (convert_unique_arg(stack_a, stack_a_nbrs, av, nbrs) == -1)
			return (-1);
	}
	else
	{
		if (convert_all_args(stack_a, stack_a_nbrs, av) == -1)
			return (-1);
	}
	return (0);
}
