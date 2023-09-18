/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:45:30 by randre            #+#    #+#             */
/*   Updated: 2023/09/17 01:45:30 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void	*str, int c, size_t n)
{
	while (n--)
		((unsigned char *)str)[n] = (unsigned char)c;
	return (str);
}
