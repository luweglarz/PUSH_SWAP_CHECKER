/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:09:06 by user42            #+#    #+#             */
/*   Updated: 2021/04/24 21:09:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	put_in_stack(t_stack *stack)
{
	free(stack->stack_a);
	stack->stack_a = NULL;
	stack->stack_a = ft_strdupint(stack->tmp_stack_a);
	free(stack->tmp_stack_a);
	stack->tmp_stack_a = NULL;
	if (stack->stack_b != NULL)
	{
		free(stack->stack_b);
		stack->stack_b = NULL;
	}
	stack->stack_b = ft_strdupint(stack->tmp_stack_b);
	free(stack->tmp_stack_b);
	stack->tmp_stack_b = NULL;
}

int ft_count_arg(char **list, t_stack stack)
{
	int i;

	i = 0;
	while (list[i])
		i++;
	i--;
	if (stack.option_v == 1)
		i--;
	return (i);
}