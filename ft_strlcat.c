/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:52:02 by randre            #+#    #+#             */
/*   Updated: 2023/10/25 14:11:23 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;

	if (!dst && src && dstsize == 0)
		return (0);
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize <= lendst)
		return (dstsize + lensrc);
	ft_strlcpy(dst + lendst, src, dstsize - lendst);
	return (lendst + lensrc);
}
