/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 21:43:48 by randre            #+#    #+#             */
/*   Updated: 2023/09/16 21:43:48 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	nbr_minu;
	int	res;

	while (*str == '\n' || *str == '\t' || *str == ' ' ||
		*str == '\f' || *str == '\v' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			nbr_minu = 1;
		str++;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - 48;
		str++;
	}
	if (nbr_minu == 1)
		res = -res;
	return (res);
}
