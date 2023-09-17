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

#include <stddef.h>

char    *ft_strrchr(const char *str, int c)
{
    unsigned char   ch;
    char            *occ;
    ch = (unsigned char)c;
    while (*str)
    {
        if (*str == ch)
            occ = (char *)str;
        str++;
    }
    if (occ != NULL)
        return (occ);
    else
        return (NULL);
}