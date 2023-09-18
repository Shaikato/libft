/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:48:21 by randre            #+#    #+#             */
/*   Updated: 2023/09/18 10:48:21 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	ft_word_count(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while(*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

static unsigned int	ft_wordlen(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while(*s != c && *s)
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

static char	**ft_loop(char const *s, char c, int i, char **ptr)
{
	unsigned int	y;
	int				j;

	j = 0;
	while (j < i)
	{
		y = 0;
		ptr[j] = ft_calloc(ft_wordlen(s, c) + 1, sizeof(char));
		if (!ptr[j])
			return (ft_free_all(ptr));
		while (ft_wordlen(s, c))
		{
			ptr[j][y] = *s;
			s++;
			y++;
		}
		while (*s == c)
			s++;
		j++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char			**ptr;
	int				i;

	if (!s)
		return (NULL);	
	i = ft_word_count(s, c);
	ptr = ft_calloc(i + 1, sizeof(char*));
	if (!ptr)
		return (NULL);
	while (*s == c)
		s++;
	ptr = ft_loop(s, c, i, ptr);
	return (ptr);
}