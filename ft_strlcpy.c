/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:42:45 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 14:00:12 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (strlen(src));
}

// void    test(int size)
// {
//     char string[] = "Hello there, Venus";
//     char buffer[19];
//     int r;
//     int r2;

//     r = strlcpy(buffer,string,size);
//     r2 = ft_strlcpy(buffer,string,size);

//     printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
//     printf("Copied '%s' into '%s', length %d\n", string, buffer, r2);
// }

// int main()
// {
//     test(19);
//     test(10);
//     test(1);
//     test(0);

//     return(0);
// }