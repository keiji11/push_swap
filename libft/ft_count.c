/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:31:49 by marvin            #+#    #+#             */
/*   Updated: 2021/06/29 17:31:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		while (num > 0)
		{
			num /= 10;
			count++;
		}
	else
		while (neg > 0)
		{
			neg /= 10;
			count++;
		}
	return (count);
}
