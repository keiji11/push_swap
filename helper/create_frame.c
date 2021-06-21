/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_frame.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:14:53 by llucente          #+#    #+#             */
/*   Updated: 2021/06/21 19:09:05 by llucente         ###   ########.fr       */
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
	QUARTER = 0;
	MEDIAN = 0;
	THREE_Q = 0;
	BIGGEST = 0;
	BIG_ROTATE = 0;
	BIG_RROTATE = 0;
	BIG_FLAG = 0;
	SMALLEST = 0;
	SMALL_ROTATE = 0;
	SMALL_RROTATE = 0;
	SMALL_FLAG = 0;
	frame->after_rotate = 0;
	return (frame);
}
