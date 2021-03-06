/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:30:23 by user42            #+#    #+#             */
/*   Updated: 2021/05/13 16:36:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	do_ra(t_stack *stack)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (!(stack->tmp_stack_a = malloc(sizeof(int) * stack->stack_a_len)))
		error(ERR_MALLOC, stack);
	while (i < stack->stack_a_len - 1)
	{
		stack->tmp_stack_a[i] = stack->stack_a[j];
		j++;
		i++;
	}
	stack->tmp_stack_a[stack->stack_a_len - 1] = stack->stack_a[0];
	free(stack->stack_a);
	stack->stack_a = NULL;
	stack->stack_a = ft_strdupint(stack->tmp_stack_a, stack->stack_a_len);
	free(stack->tmp_stack_a);
	stack->tmp_stack_a = NULL;
	stack->i++;
}

void	do_rb(t_stack *stack)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (!(stack->tmp_stack_b = malloc(sizeof(int) * stack->stack_b_len)))
		error(ERR_MALLOC, stack);
	while (i < stack->stack_b_len - 1)
	{
		stack->tmp_stack_b[i] = stack->stack_b[j];
		j++;
		i++;
	}
	stack->tmp_stack_b[stack->stack_b_len - 1] = stack->stack_b[0];
	free(stack->stack_b);
	stack->stack_b = NULL;
	stack->stack_b = ft_strdupint(stack->tmp_stack_b, stack->stack_b_len);
	free(stack->tmp_stack_b);
	stack->tmp_stack_b = NULL;
	stack->i++;
}

void	do_rra(t_stack *stack)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (!(stack->tmp_stack_a = malloc(sizeof(int) * stack->stack_a_len)))
		error(ERR_MALLOC, stack);
	stack->tmp_stack_a[0] = stack->stack_a[stack->stack_a_len - 1];
	while (i < stack->stack_a_len)
	{
		stack->tmp_stack_a[i] = stack->stack_a[j];
		j++;
		i++;
	}
	free(stack->stack_a);
	stack->stack_a = NULL;
	stack->stack_a = ft_strdupint(stack->tmp_stack_a, stack->stack_a_len);
	free(stack->tmp_stack_a);
	stack->tmp_stack_a = NULL;
	stack->i++;
}

void	do_rrb(t_stack *stack)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (stack->stack_b_len <= 1)
		return ;
	if (!(stack->tmp_stack_b = malloc(sizeof(int) * stack->stack_b_len + 1)))
		error(ERR_MALLOC, stack);
	stack->tmp_stack_b[0] = stack->stack_b[stack->stack_b_len - 1];
	while (i < stack->stack_b_len)
	{
		stack->tmp_stack_b[i] = stack->stack_b[j];
		j++;
		i++;
	}
	free(stack->stack_b);
	stack->stack_b = NULL;
	stack->stack_b = ft_strdupint(stack->tmp_stack_b, stack->stack_b_len);
	free(stack->tmp_stack_b);
	stack->tmp_stack_b = NULL;
	stack->i++;
}
