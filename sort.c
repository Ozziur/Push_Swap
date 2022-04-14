/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:21:32 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/14 19:41:44 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_to_b(t_list **stack_a, t_list **stack_b, int *arr, int max)
{
	int	i;
	int	size_a;

	size_a = ft_lstsize(*stack_a);
	i = ft_best_nbr_a(*stack_a, size_a, arr, max);
	while (i >= 0)
	{
		if (i > 0)
		{
			while (i-- > 0)
				ft_ra(stack_a);
		}
		ft_pb(stack_a, stack_b);
		i = ft_best_nbr_a(*stack_a, --size_a, arr, max);
	}
}

void	ft_move_to_a(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	i = 0;
	while (*stack_b != NULL)
	{
		i = ft_best_nbr_b(stack_b, size_b, stack_a, size_a); //inplementare funzione in oder.c
		if (i < 0)
			while (i++ < 0)
				ft_rrb(stack_b);//inplementare in move
		else if (i > 0)
			while (i-- > 0)
				ft_rb(stack_b);//inplementare in move.c
		ft_pa(stack_a, stack_b);//inplementare
		size_a++;
		size_b--;
	}
}
