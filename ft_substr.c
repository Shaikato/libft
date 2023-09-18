/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:39:05 by randre            #+#    #+#             */
/*   Updated: 2023/09/16 23:39:05 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*st;

	str = malloc((len + 1) * sizeof(char));
	st = str;
	if (!str)
		return (NULL);
	if (start > ft_strlen(s) - 1)
		return (NULL);
	while (len--)
	{
		*str = s[start];
		start++;
		str++;
	}
	*str = 0;
	return (st);
}
