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
	size_t	n;

	if (!s || !f)
		return (NULL);
	n = ft_strlen(s);
	str = (char *)ft_calloc(n + 1, sizeof(*str));
	if (!str)
		return (NULL);
	while (n--)
		str[n] = f(n, s[n]);
	return (str);
}
