/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   already_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:49:23 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/07 20:36:03 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	already_sorted(int *stack_a, int *stack_a_nbrs)
{
	int	i;
	int	j;
	int	highest;

	i = 1;
	j = 0;
	highest = stack_a[0];
	while (i < *stack_a_nbrs)
	{
		if (stack_a[i] > highest)
		{
			highest = stack_a[i];
			j++;
		}
		i++;
	}
	if (j == *stack_a_nbrs - 1)
		return (1);
	return (0);
}
