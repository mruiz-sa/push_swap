/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_exit_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:37:06 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/06/30 17:12:01 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

void	error_and_exit(int *stack_a_nbrs, int *stack_b_nbrs)
{
	free(stack_a_nbrs);
	free(stack_b_nbrs);
	write(1, "Error\n", 6);
	exit(0);
}

void	free_and_exit(int *stack_a_nbrs, int *stack_b_nbrs)
{
	free(stack_a_nbrs);
	free(stack_b_nbrs);
	exit(0);
}
