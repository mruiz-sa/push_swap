void	sort_3_nbrs(int *stack_a, int *stack_a_nbrs)
{
	if ((stack_a[1] < stack_a[0]) && (stack_a[1] < stack_a[2]) && (stack_a[0] < stack_a[2]))
		sa(stack_a, stack_a_nbrs);
	if ((stack_a[1] > stack_a[0]) && (stack_a[1] > stack_a[2]) && (stack_a[0] < stack_a[2]))
	{
		rra(stack_a, stack_a_nbrs);
		sa(stack_a, stack_a_nbrs);
	}
	if ((stack_a[1] > stack_a[0]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
		rra(stack_a, stack_a_nbrs);
	if ((stack_a[1] < stack_a[0]) && (stack_a[1] < stack_a[2]) && (stack_a[0] > stack_a[2]))
		ra(stack_a, stack_a_nbrs);
	if ((stack_a[1] < stack_a[0]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
	{
		ra(stack_a, stack_a_nbrs);
		sa(stack_a, stack_a_nbrs);
	}
}