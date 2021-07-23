/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_frame.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:53:13 by llucente          #+#    #+#             */
/*   Updated: 2021/07/23 16:30:18 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_frame	*create_frame(t_frame *frame, char **argv)
{
	frame = (t_frame *)malloc(sizeof(t_frame));
	if (!frame)
		exit(1);
	frame->a = NULL;
	frame->b = NULL;
	frame->argv = argv;
	frame->line = NULL;
	frame->str = NULL;
	frame->print_stacks = 0;
	frame->do_write = 0;
	frame->stack_len = 0;
	frame->qu = 0;
	frame->med = 0;
	frame->three_qu = 0;
	frame->biggest = 0;
	frame->big_rotate = 0;
	frame->big_rrotate = 0;
	frame->smallest = 0;
	frame->small_rotate = 0;
	frame->small_rrotate = 0;
	frame->small_flag = 0;
	frame->after_rotate = 0;
	return (frame);
}
