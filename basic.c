/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:02:34 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/29 17:10:09 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_basic(int i, int j, int x, t_list **stack_a)
{
	t_list	*tmp;

	tmp = NULL;
	while (!(i < j && j < x && x > i))
	{
		tmp = *stack_a;
		i = tmp->content;
		tmp = tmp->next;
		j = tmp->content;
		tmp = tmp->next;
		x = tmp->content;
		if ((i > j && j < x && x > i)
			|| (i > j && j > x && x < i) || (i < j && j > x && x > i))
			ft_sa(stack_a);
		if (i > j && j < x && x < i)
			ft_ra(stack_a);
		if (i < j && j > x && x < i)
			ft_rra(stack_a);
	}
}

void	ft_basic_algorithm(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		j;
	int		x;
	t_list	*tmp;

	tmp = NULL;
	i = 0;
	j = 0;
	x = 0;
	while (ft_lstsize(*stack_a) > 3)
		ft_pb(stack_a, stack_b);
	move_basic(i, j, x, stack_a);
}
