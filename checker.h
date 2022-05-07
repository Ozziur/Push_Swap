/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:10:47 by mruizzo           #+#    #+#             */
/*   Updated: 2022/05/06 18:31:30 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft/libft.h"

void	ft_exec_sort(t_list **stack_a, t_list **stack_b, char *str);
void	ft_rrr_or_death(t_list **stack_a, t_list **stack_b, char *str);
void	ft_check_write_lst(t_list **stack_a, int argc, char **argv, int i);
void	ft_check_lst_inverted(t_list **stack_a);
void	ft_check_sort(t_list *stack_a);
void	ft_check_argv_c(int argc, char **argv, t_list **stack_a);
void	ft_sa_check(t_list **stack_a);
void	ft_sb_check(t_list **stack_b);
void	ft_ss_check(t_list **stack_a, t_list **stack_b);
void	ft_pa_check(t_list **stack_b, t_list **stack_a);
void	ft_pb_check(t_list **stack_a, t_list **stack_b);
void	ft_ra_check(t_list **stack_a);
void	ft_rb_check(t_list **stack_b);
void	ft_rr_check(t_list **stack_a, t_list **stack_b);
void	ft_rra_check(t_list **stack_a);
void	ft_rrb_check(t_list **stack_b);
void	ft_rrr_check(t_list **stack_a, t_list **stack_b);

#endif