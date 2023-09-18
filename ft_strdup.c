/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:30:12 by randre            #+#    #+#             */
/*   Updated: 2023/09/16 23:30:12 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*start;

	str = malloc(((unsigned int)ft_strlen((char *)s) + 1) * sizeof(char));
	start = str;
	while (*s)
	{
		*str = *s;
		s++;
		str++;
	}
	*str = 0;
	return (start);
}
