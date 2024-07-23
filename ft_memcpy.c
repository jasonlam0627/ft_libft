/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:11:10 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 14:31:02 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	d = (char *) dest;
	s = (const char *) src;
	while (n--)
		*d++ = *s++;
	if (dest)
		return (dest);
	return (NULL);
}
