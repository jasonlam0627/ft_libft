/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:14:28 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/21 17:41:39 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	bytes_to_copy;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dst_length >= size || size == 0)
		return (size + src_length);
	else
	{
		if ((src_length + dst_length) < size)
			bytes_to_copy = src_length + 1;
		else
		{
			bytes_to_copy = size - dst_length - 1;
			dst[dst_length + bytes_to_copy] = '\0';
		}
		ft_memcpy(dst + dst_length, src, bytes_to_copy);
	}
	return (dst_length + src_length);
}
