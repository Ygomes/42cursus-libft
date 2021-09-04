/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygomes-d <ygomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:19:35 by ygomes-d          #+#    #+#             */
/*   Updated: 2021/08/31 23:34:13 by ygomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	size_t	i;
	char	*str;

	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (s1[last - 1] && ft_strchr(set, s1[last - 1]))
		last--;
	str = malloc(sizeof(last - first + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (first < last)
		str[i++] = s1[first++];
	str[i] = '\0';
	return (str);
}
