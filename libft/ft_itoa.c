/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:16:33 by marvin            #+#    #+#             */
/*   Updated: 2021/06/29 17:16:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Itoa converts an integer into a string.
** int num is the integer we want to convert.
** char *str is where we'll store it.
** line 47: i is initialized as last character index of str
*/

#include "libft.h"

static char	*negative_case(intmax_t num, char *str, int i, int count)
{
	uintmax_t neg;

	str[0] = '-';
	neg = -num;
	while (neg > 0)
	{
		str[i] = '0' + (neg % 10);
		neg = neg / 10;
		i--;
	}
	str[count] = '\0';
	return (str);
}

char		*ft_itoa(intmax_t num)
{
	char		*str;
	int			count;
	int			i;

	count = ft_count(num);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = count - 1;
	if (num == 0)
		str[0] = '0';
	if (num < 0)
		return (negative_case(num, str, i, count));
	else
		while (num > 0)
		{
			str[i] = '0' + (num % 10);
			num = num / 10;
			i--;
		}
	str[count] = '\0';
	return (str);
}
