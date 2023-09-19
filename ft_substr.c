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

	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (start > (unsigned int)ft_strlen((char *)s) - 1)
		return (NULL);
	return (ft_memcpy(str, s + start, len));
}
