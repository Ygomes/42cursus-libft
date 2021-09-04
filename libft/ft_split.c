/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygomes-d <ygomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:01:05 by ygomes-d          #+#    #+#             */
/*   Updated: 2021/09/04 15:20:58 by ygomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;
	char **str;
	size_t	start;
	size_t	len;

	str = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	len = 0;
	while (s[i++] != c)
	{
		len++;
		start = len - 1;
		str[start] = ft_strchr(s, c) + 1;
	}
	str[i] = '\0';
	return (str);
	free (str);
}

int				main(void)
{
	char	**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split("erikin marrequinho", 'i');
	if (!tab[0])
		ft_putendl_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
}
