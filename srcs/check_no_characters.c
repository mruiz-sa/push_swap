/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_no_characters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:40:55 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/06/30 18:06:30 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_no_characters(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
			i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
