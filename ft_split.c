/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:48:21 by randre            #+#    #+#             */
/*   Updated: 2023/10/24 13:45:57 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	ft_word_count(char const *s, char c)
{
	unsigned int	i;

	while (*s == c && *s)
		s++;
	if (*s)
		i = 1;
	else
		i = 0;
	while (*s)
	{
		if (*s == c && *s)
		{
			while (*s == c && *s)
				s++;
			if (*s)
				i++;
		}
		if (*s)
			s++;
	}
	return (i);
}

static unsigned int	ft_wordlen(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}

static char	**ft_free_all(char **ptr)
{
	int	i;

	i = -1;
	while (ptr[++i])
		free(ptr[i]);
	free(ptr);
	return (NULL);
}

static char	**ft_lp(char const *s, char c, unsigned int i, char **pt)
{
	unsigned int	y;
	unsigned int	j;

	j = 0;
	while (j < i && *s)
	{
		y = 0;
		pt[j] = ft_calloc(ft_wordlen(s, c) + 1, sizeof(char));
		if (!pt[j])
			return (ft_free_all(pt));
		while (ft_wordlen(s, c))
		{
			pt[j][y] = *s;
			s++;
			y++;
		}
		while (*s == c && *s)
			s++;
		j++;
	}
	return (pt);
}

char	**ft_split(char const *s, char c)
{
	char			**ptr;
	unsigned int	i;

	if (!s)
		return (NULL);
	while (*s == c && *s)
		s++;
	i = ft_word_count(s, c);
	ptr = ft_calloc(i + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr = ft_lp(s, c, i, ptr);
	if (!ptr)
		return (NULL);
	return (ptr);
}
