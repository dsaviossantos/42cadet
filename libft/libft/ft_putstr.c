/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:27:04 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/16 20:27:04 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int	it;

	it = 0;
	while (str[it] != '\0')
	{
		write(1, &str[it], 1);
		it++;
	}
}