/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:55:13 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:55:14 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rr(t_frame *frame)
{
	do_ra(frame);
	do_rb(frame);
	if (frame->do_write)
		write(1, "rr\n", 3);
}
