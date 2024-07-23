/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:43:26 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 13:48:10 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		temp_counter;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			temp_counter = 0;
			while (temp_counter < (int)ft_strlen(needle))
			{
				if ((i + temp_counter) >= len)
					return ((void *) 0);
				if (haystack[(i + temp_counter)] != needle[temp_counter])
					break ;
				temp_counter++;
				if (temp_counter == (int)ft_strlen(needle))
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return ((void *) 0);
}
