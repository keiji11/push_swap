/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:54:52 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:54:53 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_pb(t_frame *frame)
{
	long int	tmp;

	if (frame->a)
	{
		tmp = frame->a->num;
		stack_del_top(frame, 'a');
		stack_add_top(frame, 'b', tmp);
	}
	if (frame->do_write)
		write(1, "pb\n", 3);
}
