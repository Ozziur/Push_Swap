/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:45:38 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/26 18:31:49 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_best_comb(int *arr_a, int *arr_b, int size)
{
	int	*tmp;
	int	i;

	i = -1;
	tmp = (int *) malloc (sizeof(int) * size);
	if (!tmp || !arr_a ||!arr_b)
		ft_display_exit();
	while (++i < size)
	{
		if ((arr_a [i] > 0 && arr_b[i] > 0)
			|| (arr_a[i] < 0 && arr_b[i]))
		tmp[i] = ft_max_nbr(arr_a[i], arr_b[i]); // non esiste
		else
		{
			if (arr_a[i] < 0)
				arr_a[i] *= -1;
			if (arr_b < 0)
				arr_b[i] *= -1;
			tmp[i] = arr_a[i] + arr_b[i];
		}
	}
	return (ft_best_comb_helper(arr_a, arr_b, tmp, size));
}

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

int	ft_best_nbr_b(t_list **stack_b, int size_b, t_list **stack_a, int size_a)
{
	int		*arr_b;
	int		*arr_a;
	t_list	*tmp_b;
	int		i;

	i = -1;
	tmp_b = *stack_b;
	arr_a = (int *) malloc(sizeof(int) * size_b);
	arr_b = (int *) malloc(sizeof(int) * size_b);
	if (!arr_a || !arr_b)
		ft_display_exit();
	while (++i < size_b)
		arr_b[i] = ft_the_needed_b(i, size_b);
	i = -1;
	while (++i < size_b && tmp_b != NULL)
	{
		arr_a[i] = ft_the_needed_a(*stack_a, tmp_b->content, size_a);//finire funzione in order_utils.c
		tmp_b = tmp_b->next;
	}
	i = ft_best_comb(ft_intcpy(arr_a, size_b),
			ft_intcpy(arr_b,  size_b), size_b);
	//funzione da completare
}
