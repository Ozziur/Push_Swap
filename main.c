/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:58:06 by mruizzo           #+#    #+#             */
/*   Updated: 2022/04/06 17:35:45 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_argv(int argc, char **argv, t_list **stack_a)
{
	int		size;
	char	**arg;

	arg = NULL;
	size = 0;
	if (argc == 2)
	{
		ft_split(argv[1], ' ');
		while (!arg[size])
			size++;
		write_list(stack_a, size, arg, 0);
		ft_free_chartable(arg);
	}
	else if (argc >= 3)
		write_lst(stack_a, argc, argv, 1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	else
		check_argv(argc, argv, &stack_a);
}
