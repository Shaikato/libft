/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:21:26 by randre            #+#    #+#             */
/*   Updated: 2023/10/25 14:59:24 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	res;

	res = nitems * size;
	ptr = NULL;
	if (res != 0 && size != 0)
	{
		if (res / size != nitems)
			return (NULL);
	}
	if (res == 0 || size == 0)
		res = 0;
	ptr = malloc(res);
	if (ptr)
	{
		ft_bzero(ptr, nitems * size);
		return (ptr);
	}
	else
		return (NULL);
}
