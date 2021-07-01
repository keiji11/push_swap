/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:10:36 by marvin            #+#    #+#             */
/*   Updated: 2021/06/29 16:10:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reset_moves(t_frame *frame)
{
	frame->biggest = 0;
	frame->big_rotate = 0;
	frame->big_rrotate = 0;
	frame->big_flag = 0;
	frame->smallest = 0;
	frame->small_rotate = 0;
	frame->small_rrotate = 0;
	frame->small_flag = 0;
}
