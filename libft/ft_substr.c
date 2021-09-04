/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygomes-d <ygomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:54:35 by ygomes-d          #+#    #+#             */
/*   Updated: 2021/09/04 15:21:27 by ygomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = malloc(sizeof ft_strlen(s) + 1);
	if (!substr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < start)
		i++;
	while (s[i + j] && j < len)
	{
		substr[j] = s[i + j];
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
