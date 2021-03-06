/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:19:20 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/28 17:55:04 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*copy_cont(t_list *stack_a, int size)
{
	int	*cpy;
	int	i;

	i = 0;
	cpy = ft_calloc(sizeof(int), size);
	if (!cpy)
		ft_display_exit();
	while (stack_a != NULL)
	{
		cpy[i] = stack_a->content;
		stack_a = stack_a->next;
		i++;
	}
	return (cpy);
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
