/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:15:07 by randre            #+#    #+#             */
/*   Updated: 2023/09/15 06:15:14 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void	*str, int c, size_t n)
{
	int	i;

	i = 0;
	if (str)
	{	
		while (i < n)
		{
			((unsigned char *)str)[i] = c;
			i++;
		}
	}
	return (str);
}
