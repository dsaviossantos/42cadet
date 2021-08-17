/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 09:46:59 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/17 09:47:00 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 97 && c <= 122)
		{
			return (c - 32);
		}
		else
		{
			return (c);
		}
	}
	return (c);
}