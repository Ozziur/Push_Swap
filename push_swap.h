/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:57:12 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/14 19:33:24 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

void	write_lst(t_list **stack_a, int argc, char **argv, int i);
int		*copy_cont(t_list *stack_a, int size);
void	ft_move_to_b(t_list **stack_a, t_list **stack_b, int *arr, int max);
int		ft_best_nbr_a(t_list *stack_a, int size, int *arr, int max);
void	ft_ra(t_list **stack_a);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_move_to_a(t_list **stack_a, t_list **stack_b);

#endif