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
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	ptr_s1 = (unsigned char *)str1;
	ptr_s2 = (unsigned char *)str2;
	i = 0;
	while (ptr_s1[i] && ptr_s2[i] && i < n && ptr_s1[i] == ptr_s2[i])
		i++;
	if (i == n)
		return (0);
	return (ptr_s1[i] - ptr_s2[i]);
}
