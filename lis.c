/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:52:28 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/26 15:56:51 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_lis_util(int *dst, int *arr, int max, int size)
{
	int	j;
	int	*val;

	j = size;
	val = malloc(sizeof(int) * max);
	while (j >= 0)
	{
		if (arr[j] == max)
		{
			val[max - 1] = dst[j];
			max--;
		}
		j--;
	}
	free(arr);
	return (val);
}

int	*define_lis(int *dst, int size, int *max)
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	j = -1;
	arr = (int *) malloc (sizeof(int) * size);
	if (!arr)
		ft_display_exit();
	while (i < size)
		arr[i++] = 1;
	while (++j < size)
	{
		i = j - 1;
		while (++i < size)
		{
			if (dst[j] < dst[i] && arr[j] == arr[i])
			{
				arr[i] += 1;
				if (arr[i] > *max)
					*max = arr[i];
			}
		}
	}
	return (ft_lis_util(dst, arr, *max + 1, size));
}
