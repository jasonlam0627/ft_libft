/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:49:23 by jasonlam          #+#    #+#             */
/*   Updated: 2024/07/20 14:28:30 by jasonlam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word_count(char const *s, char c)
{
	size_t	word_count;
	size_t	is_word;

	is_word = 0;
	word_count = 0;
	while (*s)
	{
		if (*s != c && is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
		else if (*s == c)
			is_word = 0;
		s++;
	}
	return (word_count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*out;
	size_t	i;

	out = (char *)malloc(n + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < n && s[i])
	{
		out[i] = s[i];
		i++;
	}
	while (i <= n)
		out[i++] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	word_count = get_word_count(s, c);
	split = malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (s[j] == c)
			j++;
		s = &s[j];
		j = 0;
		while (s[j] != c && s[j])
			j++;
		split[i++] = ft_strndup(s, j);
	}
	split[i] = 0;
	return (split);
}
