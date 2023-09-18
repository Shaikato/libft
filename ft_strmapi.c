/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:23:34 by randre            #+#    #+#             */
/*   Updated: 2023/09/18 10:23:34 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = malloc(((unsigned int)(((char *)s) + 1)) * sizeof(char));
	while (s[i])
	{
		str[i] = f(i, *s);
		i++;
	}
	return (str);
}
