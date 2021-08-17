/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:32:49 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/16 20:32:49 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst,
			 const char *restrict src, size_t dstsize)
{
	size_t		ld;
	size_t		ls;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (dstsize < ld + 1)
		return (dstsize + ls);
	if (dstsize - ld > 0)
		ft_strlcpy(&dst[ld], src, dstsize - ld);
	return (ld + ls);
}
