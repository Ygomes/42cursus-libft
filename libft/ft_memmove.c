/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygomes-d <ygomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 09:58:36 by ygomes-d          #+#    #+#             */
/*   Updated: 2021/08/31 11:07:44 by ygomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*psrc;
	unsigned char	*pdest;

	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	i = 0;
	if (psrc < pdest)
	{
		while (i <= n)
		{
			pdest[n - i] = psrc[n - i];
			i++;
		}
	}
	else
		while (n--)
			pdest[n] = psrc[n];
	return (dest);
}
