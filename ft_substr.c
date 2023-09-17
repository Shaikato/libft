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

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    char    *st;
    str = malloc(len * sizeof(char));
    st = str;
    if (!(str))
        return (NULL);
    while(len--)
    {
        *str = s[start];
        start++;
        str++;
    }
    return (st);
}