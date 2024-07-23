/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:52:51 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 14:44:59 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i;
	int		j;

	out = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!s1 || !s2 || !out)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		out[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		out[i++] = s2[j++];
	out[i] = '\0';
	return (out);
}
