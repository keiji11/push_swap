/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:21:27 by marvin            #+#    #+#             */
/*   Updated: 2021/06/29 17:21:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*hay;

	i = 0;
	hay = (char*)haystack;
	if (!*needle)
		return (hay);
	while (hay[i] != '\0')
	{
		j = 0;
		while (hay[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (&hay[i]);
		}
		i++;
	}
	return (NULL);
}
