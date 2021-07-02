/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:55:19 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:55:20 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rra(t_frame *frame)
{
	if (frame->a)
		frame->a = frame->a->prev;
	if (frame->do_write)
		write(1, "rra\n", 4);
}
