/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:34:10 by randre            #+#    #+#             */
/*   Updated: 2023/09/16 22:34:10 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (!str1)
		return (0 - *str2);
	if (!str2)
		return (*str1);
	while (n--)
		if (*str1++ != *str2++)
			return ((unsigned char)*str1 - (unsigned char)*str2);
	return (0);
}
