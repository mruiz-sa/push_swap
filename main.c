/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:54:04 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/03 19:45:36 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

#include "./include/push_swap.h"

int	main(int ac, char **av)
{
	int	*stack_a_nbrs;
	int	*stack_b_nbrs;
	int	*stack_a;
	int	*stack_b;

	stack_a_nbrs = (int *)malloc(sizeof(int));
	stack_b_nbrs = (int *)malloc(sizeof(int));
	check_args(ac, av, stack_a_nbrs, stack_b_nbrs);
	set_stack_nbrs(stack_a_nbrs, stack_b_nbrs, ac);
	stack_a = (int *)malloc(sizeof(int) * stack_size(ac, av));
	stack_b = (int *)malloc(sizeof(int) * stack_size(ac, av));
	if ((check_input(stack_a, stack_a_nbrs, av) == -1)
		|| (already_sorted(stack_a, stack_a_nbrs) == 1))
		free_stacks(stack_a_nbrs, stack_b_nbrs, stack_a, stack_b);
	if ((*stack_a_nbrs == 2) && (stack_a[0] > stack_a[1]))
		sa(stack_a, stack_a_nbrs);
	else if (*stack_a_nbrs == 3)
		sort_3_nbrs(stack_a, stack_a_nbrs);
	else if (*stack_a_nbrs == 5)
		sort_5_nbrs(stack_a, stack_a_nbrs, stack_b, stack_b_nbrs);
	/* printf("Stack_a: %d, %d, %d, %d, %d\n", stack_a[0], stack_a[1], stack_a[2], stack_a[3], stack_a[4]);
	printf("Stack_a_nbrs: %d\n", stack_a_nbrs[0]); */
	free_stacks(stack_a_nbrs, stack_b_nbrs, stack_a, stack_b);
}
