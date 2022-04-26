/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:54:09 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/26 16:40:10 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	return_max_or_min(int cont, int *max_n_min, int size)
{
	if (cont > max_n_min[0])
		return (max_n_min[2]);
	if (cont < max_n_min[1])
		return (max_n_min[3]);
	return (size + 1);
}

int	ft_max_or_min(t_list *stack_a, int cont, int size)
{
	int	max_n_min[5];

	max_n_min[0] = stack_a->content;
	max_n_min[1] = stack_a->content;
	max_n_min[2] = 0;
	max_n_min[3] = 0;
	max_n_min[4] = 1;
	while (stack_a)
	{
		if (stack_a->content >= max_n_min[0])
		{
			max_n_min[0] = stack_a->content;
			max_n_min[2] = max_n_min[4];
		}
		if (stack_a->content < max_n_min[1])
		{
			max_n_min[1] = stack_a->content;
			max_n_min[3] = max_n_min[4] - 1;
		}
		stack_a = stack_a->next;
		max_n_min[4]++;
	}
	return (return_max_or_min(cont, max_n_min, size));
}
