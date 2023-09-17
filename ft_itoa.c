/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:28:43 by randre            #+#    #+#             */
/*   Updated: 2023/09/17 02:28:43 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	len = (unsigned int)ft_nbrlen(n);
	i = 0;
	str = malloc(len * sizeof(char) + 1);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		len += 1;
		i = 1;
		str[0] = '-';
		n = -n;
	}
	str[len] = 0;
	while (len > i)
	{
		str[len - 1] = (char)((n % 10) + 48);
		n /= 10;
		len--;
	}
	return (str);
}
