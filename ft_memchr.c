/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:21:54 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 14:25:35 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}

// int main () {
//     const char str[] = "https://www.tutorialspoint.com";
//     const char ch = '.';
//     char *ret;
//     // printf("%d",strlen(str));
//     ret = ft_memchr(str, ch, strlen(str));

//     printf("String after |%c| is - |%s|\n", ch, ret);

//     return(0);
// }