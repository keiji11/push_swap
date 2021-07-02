/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:54:59 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:55:00 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_ra(t_frame *frame)
{
	if (frame->a)
		frame->a = frame->a->next;
	if (frame->do_write)
		write(1, "ra\n", 3);
}
