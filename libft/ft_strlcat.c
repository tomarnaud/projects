/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:17:52 by tharnaud          #+#    #+#             */
/*   Updated: 2022/10/05 14:17:10 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dinc;
	size_t	sinc;
	size_t	stotal;
	size_t	dtotal;

	dinc = 0;
	sinc = 0;
	stotal = 0;
	if (!dst && dstsize == 0)
		return (0);
	while (dst[dinc] != '\0' && dinc < dstsize)
		dinc++;
	dtotal = dinc;
	while (src[stotal] != '\0')
		stotal++;
	if (dstsize != 0)
	{	
		while (src[sinc] != '\0' && dinc < dstsize -1)
		{
			dst[dinc] = src[sinc];
			sinc++;
			dinc++;
		}
	}
	if (dinc > dtotal)
		dst[dinc] = '\0';
	return (dtotal + stotal);
}
