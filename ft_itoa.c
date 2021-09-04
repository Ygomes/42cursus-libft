/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygomes-d <ygomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:22:39 by ygomes-d          #+#    #+#             */
/*   Updated: 2021/09/04 15:20:39 by ygomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_len(unsigned int n)
{
	unsigned int	i;
	unsigned int	nbr;

	i = 0;
	nbr = n;
	if (nbr <= 0)
		i = 1;
	while (nbr)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	len;
	char			*result;

	num = n;
	len = ft_len(num);
	result = malloc (sizeof(len));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		num = num * -1;
	while (len--)
	{
		result[len] = num % 10 + 48;
		num = num / 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
