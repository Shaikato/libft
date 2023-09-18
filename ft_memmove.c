/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:15:04 by randre            #+#    #+#             */
/*   Updated: 2023/09/18 13:30:35 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
    unsigned char   *s1;
    unsigned char   *s2;

    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    if (s1 < s2)
        while (n--)
            *s1++ = *s2++;
    else
        ft_memcpy(str1, str2, n);
    return (str1);
}
