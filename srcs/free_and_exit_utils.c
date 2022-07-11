/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_exit_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:37:06 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/11 09:49:54 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

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

void	free_stacks(int *stack_a_nbrs, int *stack_b_nbrs,
	int *stack_a, int *stack_b)
{
	free(stack_a_nbrs);
	free(stack_b_nbrs);
	free(stack_a);
	free(stack_b);
	exit(0);
}

void	free_stacks_and_error(int *stack_a_nbrs, int *stack_b_nbrs,
	int *stack_a, int *stack_b)
{
	free(stack_a_nbrs);
	free(stack_b_nbrs);
	free(stack_a);
	free(stack_b);
	write(1, "Error\n", 6);
	exit(0);
}
