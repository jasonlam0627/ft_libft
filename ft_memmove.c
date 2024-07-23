/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:28:39 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 19:04:46 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t					i;
	unsigned char			*uc1;
	const unsigned char		*uc2;

	uc1 = (unsigned char *)str1;
	uc2 = (const unsigned char *)str2;
	i = 0;
	if (uc1 > uc2)
	{
		i = n;
		while (i > 0)
		{
			uc1[i - 1] = uc2[i - 1];
			i--;
		}
	}
	else if (uc1 < uc2)
	{
		while (i < n)
		{
			uc1[i] = uc2[i];
			i++;
		}
	}
	return (str1);
}
