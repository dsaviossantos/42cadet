/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:44:35 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/27 17:54:28 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	size_t	tmp;
	char	*str;

	i = 0;
	if (!s1)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((n * sizeof(char)) + 1);
	if (!(str))
		return (NULL);
	n = 0;
	tmp = ft_strlen(s1);
	while (n < tmp)
		str[i++] = s1[n++];
	n = 0;
	tmp = ft_strlen(s2);
	while (n < tmp)
		str[i++] = s2[n++];
	str[i] = '\0';
	return (str);
}
