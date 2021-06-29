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
	BIGGEST = 0;
	BIG_ROTATE = 0;
	BIG_RROTATE = 0;
	BIG_FLAG = 0;
	SMALLEST = 0;
	SMALL_ROTATE = 0;
	SMALL_RROTATE = 0;
	SMALL_FLAG = 0;
}
