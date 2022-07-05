/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:28:17 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/07/05 19:39:34 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>

size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	convert_input(int *stack_a, int *stack_a_nbrs, char **av);
int		check_no_characters(char *str);
void	free_array(char **str);
void	error_and_exit(int *stack_a_nbrs, int *stack_b_nbrs);
void	free_and_exit(int *stack_a_nbrs, int *stack_b_nbrs);
int		stack_size(int ac, char **av);
void	set_stack_nbrs(int	*stack_a_nbrs, int *stack_b_nbrs, int ac);
void	check_args(int ac, char **av, int *stack_a_nbrs, int *stack_b_nbrs);
void	free_stacks(int *stack_a_nbrs, int *stack_b_nbrs, int *stack_a,
			int *stack_b);
void	free_stacks_and_error(int *stack_a_nbrs, int *stack_b_nbrs,
			int *stack_a, int *stack_b);
int		already_sorted(int *stack_a, int *stack_a_nbrs);
int		repeated_nbrs(int *stack_a, int *stack_a_nbrs);
int		max_min_values(int *stack_a, int *stack_a_nbrs);
void	sa(int *stack_a, int *stack_a_nbrs);
void	sb(int *stack_b, int *stack_b_nbrs);
void	ss(int *stack_a, int *stack_b, int *stack_a_nbrs, int *stack_b_nbrs);
void	pa(int *stack_a, int *stack_b, int *stack_a_nbrs, int *stack_b_nbrs);
void	pb(int *stack_a, int *stack_b, int *stack_a_nbrs, int *stack_b_nbrs);
void	ra(int *stack_a, int *stack_a_nbrs);
void	rb(int *stack_b, int *stack_b_nbrs);
void	rr(int *stack_a, int *stack_a_nbrs, int *stack_b, int *stack_b_nbrs);
void	rra(int *stack_a, int *stack_a_nbrs);
void	rrb(int *stack_b, int *stack_b_nbrs);
void	rrr(int *stack_a, int *stack_a_nbrs, int *stack_b, int *stack_b_nbrs);
void	sort_3_nbrs(int *stack_a, int *stack_a_nbrs);
void	sort_5_nbrs(int *stack_a_nbrs, int *stack_b_nbrs, int *stack_a,
			int *stack_b);
#endif
