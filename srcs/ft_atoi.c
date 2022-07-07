/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:10:39 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/07 20:36:22 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

int	ft_atoi(const char *str)
{
	long	num;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	num = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if ((num * sign) < -2147483648 || (num * sign) > 2147483647)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	return ((int)num * sign);
}
