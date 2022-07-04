void	rra(int *stack_a, int *stack_a_nbrs)
{
	int	i;
	int	*tmp;

	i = *stack_a_nbrs - 1;
	tmp = (int *)malloc(sizeof(int));
	*tmp = stack_a[i];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = *tmp;
	free(tmp);
	write(1, "rra\n", 4);
}

void	rrb(int *stack_b, int *stack_b_nbrs)
{
	int	i;
	int	*tmp;

	i = *stack_b_nbrs - 1;
	tmp = (int *)malloc(sizeof(int));
	*tmp = stack_b[i];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = *tmp;
	free(tmp);
	write(1, "rrb\n", 4);
}

void	rrr(int *stack_a, int *stack_a_nbrs, int *stack_b, int *stack_b_nbrs)
{
	int	i;
	int	*tmp;

	i = *stack_a_nbrs - 1;
	tmp = (int *)malloc(sizeof(int));
	*tmp = stack_a[i];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = *tmp;
	i = *stack_b_nbrs - 1;
	*tmp = stack_b[i];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = *tmp;
	free(tmp);
	write(1, "rrr\n", 4);
}