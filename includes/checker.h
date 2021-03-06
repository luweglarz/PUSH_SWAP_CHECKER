/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:44:11 by user42            #+#    #+#             */
/*   Updated: 2021/05/13 16:36:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include "get_next_line.h"
#include <stdbool.h>

#define BUFFER_SIZE 32

#define ERR_VALUE1 -1
#define ERR_VALUE2 -2
#define ERR_VALUE3 -3
#define ERR_ARG -4
#define ERR_MALLOC -5

typedef struct 	s_stack
{
		int 			*stack_a;
		int 			*stack_b;
		int				*tmp_stack_a;
		int				*tmp_stack_b;
		int 			stack_a_len;
		int				stack_a_lowest;
		int				stack_a_highest;
		int 			stack_b_len;
		int				stack_b_lowest;
		int				stack_b_highest;
		int				option_nb;
		bool			option_v;
		char			**av;
		int i;
}			 	t_stack;

typedef struct s_instruction
{
	char		*data_type;
	int			data_len;
	void		(*tab_elem)(t_stack *stack);
}			   t_instruction;


void	fill_stack(t_stack *stack);
void	error(int errcode, t_stack *stack);

int		ft_isdigit(int c);
long	ft_atoi(const char *nptr, t_stack *stack);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strlen(char *str);
int		*ft_strdupint(int *t, int len);

void	do_instruction(t_stack *stack, char *line);

void	do_sa(t_stack *stack);
void	do_sb(t_stack *stack);
void	do_ss(t_stack *stack);
void	do_pa(t_stack *stack);
void	do_pb(t_stack *stack);

void	do_ra(t_stack *stack);
void	do_rb(t_stack *stack);
void	do_rr(t_stack *stack);
void	do_rra(t_stack *stack);
void	do_rrr(t_stack *stack);
void	do_rrb(t_stack *stack);

int ft_count_arg(char **list, t_stack stack);
void	put_in_stack(t_stack *stack);
int		check_sorting(int *stack, int len);
int		check_sorting2(int *stack, int len);
void	init_stack(t_stack *stack, char **av, int ac);

int		has_higher(int pivot, t_stack *stack);
int		has_lower(int pivot, t_stack *stack);
int		find_median(t_stack stack);
int		find_lowest(int *stack, int len);
int		find_highest(int *stack, int len);

#endif