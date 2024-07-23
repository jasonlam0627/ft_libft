/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 01:36:15 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 14:49:30 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_digit(int n)
{
	size_t	dig;

	dig = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		dig++;
	while (n != 0)
	{
		n = n / 10;
		dig++;
	}
	return (dig);
}

char	*ft_itoa(int n)
{
	char	*out;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	out = (char *)malloc(sizeof(char) * (check_digit(n) + 1));
	if (!out)
		return (0);
	i = check_digit(n);
	if (n < 0)
	{
		out[0] = '-';
		n = -n;
	}
	out[i] = '\0';
	while (n != 0)
	{
		out[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (out);
}
