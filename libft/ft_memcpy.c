/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:54:26 by marvin            #+#    #+#             */
/*   Updated: 2021/06/29 17:54:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*newdst;
	const char	*newsrc;

	newdst = (char*)dst;
	newsrc = (char*)src;
	while (n > 0)
	{
		*newdst++ = *newsrc++;
		n--;
	}
	return (dst);
}
