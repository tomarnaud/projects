/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:36:09 by tharnaud          #+#    #+#             */
/*   Updated: 2022/10/05 16:51:42 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	ft_checkwhite(const char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

static int	ft_create_out(int i, int sign, const char *str)
{
	unsigned long int	out;

	out = 0;

	while (str[i] >= 48 && str[i] <= 57)
	{
		out = (out * 10) + (str[i] - 48);
		i++;
	}
	if (out > 9223372036854775807 && sign == 1)
		return (0);
	else if (out > 9223372036854775807 && sign == 0)
		return (-1);
	else if (sign == 1)
		return ((int)out * -1);
	else
		return ((int)out);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	countmin;
	int	out;
	int	sign;

	i = 0;
	countmin = 0;
	sign = 0;
	while (ft_checkwhite(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	if (str[i] >= 48 && str[i] <= 57)
		out = ft_create_out(i, sign, str);
	else
		out = 0;
	return (out);
}
