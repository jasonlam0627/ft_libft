/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:23:38 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 14:00:58 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		ch = ch + 32;
	}
	return (ch);
}

// int main()
// {
//     char ch;

//     ch = 'A';
//     printf("%c in uppercase is represented as  %c", ch, toupper(ch));

//     return 0;
// }