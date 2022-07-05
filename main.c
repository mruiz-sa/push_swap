/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:54:04 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/05 19:50:05 by mruiz-sa         ###   ########.fr       */
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
	convert_input(stack_a, stack_a_nbrs, av);
	if (repeated_nbrs(stack_a, stack_a_nbrs) == 1
		|| max_min_values(stack_a, stack_a_nbrs) == 1)
		free_stacks_and_error(stack_a_nbrs, stack_b_nbrs, stack_a, stack_b);
	if (already_sorted(stack_a, stack_a_nbrs) == 1)
		free_stacks(stack_a_nbrs, stack_b_nbrs, stack_a, stack_b);
	if ((*stack_a_nbrs == 2) && (stack_a[0] > stack_a[1]))
		sa(stack_a, stack_a_nbrs);
	else if (*stack_a_nbrs == 3)
		sort_3_nbrs(stack_a, stack_a_nbrs);
	/* else if (*stack_a_nbrs == 5)
		sort_5_nbrs(stack_a, stack_a_nbrs, stack_b, stack_b_nbrs);
	else if (*stack_a_nbrs == 5)
	{
		pb(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
		pb(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
	} */
	printf("Stack_a: %d, %d, %d\n", stack_a[0], stack_a[1], stack_a[2]);
	printf("Stack_b: %d, %d\n", stack_a[0], stack_a[1]);
	printf("Stack_a_nbrs: %d\n", *stack_a_nbrs);
	printf("Stack_b_nbrs: %d\n", *stack_b_nbrs);
	free_stacks(stack_a_nbrs, stack_b_nbrs, stack_a, stack_b);
}
