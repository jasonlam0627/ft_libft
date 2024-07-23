/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:30:50 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 14:28:57 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		ch = ch - 32;
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