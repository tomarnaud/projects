/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:09:01 by tharnaud          #+#    #+#             */
/*   Updated: 2022/10/05 18:07:20 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = -1;
	if (dst < src)
	{
		while (++i < len)
			*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
	}
	else while (len--)
		*(unsigned char*)(dst + (len - 1)) = *(unsigned char*)(src + (len - 1));
	return (dst);
}
