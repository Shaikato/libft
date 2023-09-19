/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:28:52 by randre            #+#    #+#             */
/*   Updated: 2023/09/16 22:28:52 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *)str + ft_strlen(str);
	if (str)
		while (ptr >= str)
			if (*ptr-- == (unsigned char)c)
				return (ptr + 1);
	return (NULL);
}
