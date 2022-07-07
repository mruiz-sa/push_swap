/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeated_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:37:15 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/07 20:36:03 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	repeated_nbrs(int *stack_a, int *stack_a_nbrs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < *stack_a_nbrs)
	{
		j = 0;
		while (j < *stack_a_nbrs)
		{
			if ((stack_a[i] == stack_a[j]) && (j != i))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
