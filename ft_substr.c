/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:34:31 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 20:54:33 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	j;

	if (start > (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen(s) - start)
		len = (size_t)ft_strlen(s) - start;
	new_str = (char *)malloc(len + 1);
	if (!s || !new_str)
		return (0);
	j = 0;
	while (start < (size_t)ft_strlen(s) && j < len)
	{
		new_str[j] = s[start + j];
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
