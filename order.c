/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:45:38 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/14 17:50:41 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_best_nbr_a(t_list *stack_a, int size, int *arr, int max)
{
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (stack_a != NULL)
	{
		i = 0;
		while (stack_a->content != arr[i] && i < max)
		{
			if (i == max - 1)
				return (pos);
			i++;
		}
		stack_a = stack_a->next;
		pos++;
	}
	return (-1);
}
