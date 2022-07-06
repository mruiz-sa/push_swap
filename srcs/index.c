/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:34:31 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/06 20:47:16 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_copy(int *copy, int *stack_a_nbrs)
{
	
}

void	copy_stack(int *copy, int *stack_a, int *stack_a_nbrs)
{
	int	i;

	i = 0;
	while (i < *stack_a_nbrs)
	{
		copy[i] = stack_a[i];
		i++;
	}
}

int	index(int *stack_a, int *stack_a_nbrs)
{
	int	*copy;

	copy = (int *)malloc(sizeof(int) * *stack_a_nbrs);
	copy_stack(copy, stack_a, stack_a_nbrs);
	sort_copy(copy, stack_a_nbrs);
}
