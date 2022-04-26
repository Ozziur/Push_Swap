/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:21:30 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/26 17:14:06 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_the_needed_a(t_list *stack_a, int cont, int size)
{
	t_list	*tmp;
	int		i;

	tmp = stack_a;
	i = ft_max_or_min(stack_a, cont, size);
	if (i != size + 1)
		return (ft_the_needed_b);
	while (tmp->next)
		tmp = tmp->next;
	if (cont < stack_a->content && cont > tmp->content)
		return (0);
	i = 1;
	while (!(cont > stack_a->content && cont < stack_a->next->content))
	{
		stack_a = stack_a->next;
		i++;
	}
	return (ft_the_needed_b(i, size));
}

int	ft_the_needed_b(int max, int size)
{
	if (max > (size / 2))
		max = max - size;
	return (max);
}

int	*ft_intcpy(int	*arr, int size)
{
	int	i;
	int	*cpy;

	i = 0;
	cpy = (int *) malloc (sizeof(int) * size);
	if (!arr || !cpy)
		ft_display_exit();
	while (i < size)
	{
		cpy[i] = arr[i];
		i++;
	}
	return (cpy);
}
