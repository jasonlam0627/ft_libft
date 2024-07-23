/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:12:33 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 21:32:56 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*my_s1;
	unsigned char	*my_s2;

	my_s1 = (unsigned char *)str1;
	my_s2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (my_s1[i] == '\0' && my_s2[i] == '\0')
			return (0);
		if (my_s1[i] != '\0' && my_s2[i] == '\0')
			return (1);
		if (my_s1[i] == '\0' && my_s2[i] != '\0')
			return (-1);
		if (my_s1[i] != my_s2[i])
			return (my_s1[i] - my_s2[i]);
		i++;
	}
	return (0);
}
