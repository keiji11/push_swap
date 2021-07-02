/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:55:35 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:55:36 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rrr(t_frame *frame)
{
	do_rra(frame);
	do_rrb(frame);
	if (frame->do_write)
		write(1, "rrr\n", 4);
}
