/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:23:53 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/06 17:40:31 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	write_lst(t_list **stack_a, int argc, char **argv, int i)
{
	t_list *tmp;

	tmp = NULL;
	while (i < argc)
	{
		tmp = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack_a, tmp);
		
	}
	
}
