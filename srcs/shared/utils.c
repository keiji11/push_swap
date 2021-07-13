/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:56:56 by llucente          #+#    #+#             */
/*   Updated: 2021/07/13 19:01:57 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isneg(char c)
{
	if (c == '-')
		return (-1);
	else
		return (0);
}

void	ft_goto_pushswap_error(int len, t_frame *frame)
{
	if (len > 10)
		push_swap_error(frame);
	else
		return ;
}

void	ter_stack_frm_a_b(char stack_name, t_frame *frame, char ch)
{
	t_stack	*stack;

	stack = NULL;
	if (stack_name == ch && !stack)
		stack = frame->a;
	else
		stack = frame->b;
}

void	ter_flag_rrotate(int flag, t_frame *frame)
{
	if (flag == 1)
		frame->small_rrotate++;
	else
		frame->big_rrotate++;
}
