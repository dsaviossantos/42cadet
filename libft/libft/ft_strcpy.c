/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:28:32 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/16 20:28:33 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	it;
	int	flag;

	flag = 0;
	it = 0;
	while (flag != 1)
	{
		if (src[it])
		{
			dest[it] = src[it];
			it++;
		}
		else
		{
			flag = 1;
		}
		dest[it] = '\0';
	}
	return (dest);
}
