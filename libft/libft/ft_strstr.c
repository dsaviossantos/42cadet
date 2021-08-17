/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:33:30 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/16 20:33:30 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	n;

	n = ft_strlen(to_find);
	if (*to_find == '\0')
	{
		return (str);
	}
	if (*str == '\0')
	{
		return (NULL);
	}
	while (*str)
	{
		if (!ft_memcmp(str, to_find, n))
		{
			return (str);
		}
		str++;
	}
	return (0);
}
