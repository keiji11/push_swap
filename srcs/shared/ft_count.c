/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:49:40 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:49:40 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	negative(uintmax_t neg, intmax_t count)
{
	while (neg > 0)
	{
		neg /= 10;
		count++;
	}
}

intmax_t	ft_count(intmax_t num)
{
	intmax_t	count;
	uintmax_t	neg;

	count = 0;
	if (num <= 0)
	{
		neg = -num;
		count++;
	}
	if (!count)
	{
		negative(neg, count);
	}
	else
	{
	}
	return (count);
}
