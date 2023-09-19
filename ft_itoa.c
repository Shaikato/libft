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

static int	ft_nbrlen(int n)
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

static char	*ft_min_handle(void)
{
	char	*str;

	str = malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = 0;
	return (str);
}

static void	ft_loop(unsigned int len, unsigned int i, int n, char *str)
{
	while (len > i)
	{
		str[len - 1] = (char)((n % 10) + 48);
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	if (n == -2147483648)
		return (ft_min_handle());
	len = (unsigned int)ft_nbrlen(n);
	i = 0;
	if (n < 0)
		len++;
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		i = 1;
		str[0] = '-';
		n = -n;
	}
	ft_loop(len, i, n, str);
	str[len] = 0;
	return (str);
}
