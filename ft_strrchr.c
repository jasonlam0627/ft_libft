/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:43:59 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/23 17:06:08 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	cc;

	cc = (char) c;
	while (*str != '\0' && ft_strchr(str + 1, c) != 0)
		str++;
	if (*str == cc)
		return ((char *)str);
	return (NULL);
}
