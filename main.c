/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:54:04 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/06/29 19:21:46 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	display_error_and_exit(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

void	check_args(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac < 2)
		exit(0);
	while (i < ac)
	{
		if ((av[i][0] == ' ') || (av[i][ft_strlen(av[i]) - 1] == ' '))
			display_error_and_exit();
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] < 48 || av[i][j] > 57) && av[i][j] != 32
				&& av[i][j] != 45)
				display_error_and_exit();
			if ((av[i][j] == 32) && (av[i][j + 1] == 32))
				display_error_and_exit();
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	check_args(ac, av);
}
