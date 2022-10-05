/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:23:10 by tharnaud          #+#    #+#             */
/*   Updated: 2022/10/05 14:19:38 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	a;
	char			*str;


	str = b;
	a = c;
	i = 0;
	while (i < len)
	{
		str[i] = a;
		i++;
	}
	return ((void *)str);
}
