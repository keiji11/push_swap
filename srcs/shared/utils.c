/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:56:56 by llucente          #+#    #+#             */
/*   Updated: 2021/07/17 22:18:09 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isneg(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

void	ft_goto_pushswap_error(int len, t_frame *frame)
{
	if (len > 10)
		push_swap_error(frame);
	else
		return ;
}

t_stack	*ter_stack_frm_a_b(char stack_name, t_frame *frame, char ch)
{
	t_stack	*stack;

	stack = NULL;
	if (stack_name == ch)
		stack = frame->a;
	else
		stack = frame->b;
	return (stack);
}

void	ter_flag_rrotate(int flag, t_frame *frame)
{
	if (flag == 1)
		frame->small_rrotate++;
	else
		frame->big_rrotate++;
}
