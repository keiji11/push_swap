/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keiji-pop <keiji-pop@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:41:16 by keiji-pop         #+#    #+#             */
/*   Updated: 2021/07/01 14:45:14 by keiji-pop        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_stack_a_b(int a_flag, int b_flag)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (!stack_a)
		a_flag = 1;
	if (!stack_b)
		b_flag = 1;
}

void	if_flag_b(int b_flag, t_stack *stack_b, char *b)
{
	if (!b_flag)
		b = ft_itoa(stack_b->num);
	else
		b = ft_strdup("");
}

void	if_flag_a(int a_flag, t_stack *stack_a, char *a)
{
	if (!a_flag)
		a = ft_itoa(stack_a->num);
	else
		a = ft_strdup("");
}

void	if_stack_a_2(t_frame *frame, int a_flag, t_stack *stack_a)
{
	if (!stack_a || stack_a == frame->a->prev)
		a_flag = 1;
}

void	if_stack_b_2(t_frame *frame, int b_flag, t_stack *stack_b)
{
	if (!stack_b || stack_b == frame->b->prev)
		b_flag = 1;
}
