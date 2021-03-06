/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:07:37 by user42            #+#    #+#             */
/*   Updated: 2021/05/13 16:36:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	do_ss(t_stack *stack)
{
	do_sa(stack);
	do_sb(stack);
	stack->i--;
}

void	do_rr(t_stack *stack)
{
	do_ra(stack);
	do_rb(stack);
	stack->i--;
}

void	do_rrr(t_stack *stack)
{
	do_rra(stack);
	do_rrb(stack);
	stack->i--;
}
