/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_frame.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keiji-pop <keiji-pop@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:14:53 by llucente          #+#    #+#             */
/*   Updated: 2021/07/01 14:03:58 by keiji-pop        ###   ########.fr       */
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
	frame->quarter = 0;
	frame->median = 0;
	frame->three_quarters = 0;
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
