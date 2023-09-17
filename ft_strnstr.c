/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:37:44 by randre            #+#    #+#             */
/*   Updated: 2023/09/16 22:37:44 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    char    *start;
    char    *occ;
    size_t  i;

    start = (char *)little; 
    while (*big)
    {
        i = len;
        little = start;
        if (*big == *little)
        {
            occ = (char *)big;
            while (*big == *little && i--)
            {
                big++;
                little++;
            }
            if (!(i--))
                return (occ);
        }
    }
    return (NULL);
}