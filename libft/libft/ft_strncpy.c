/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:33:09 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/16 20:33:10 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	schet;

	schet = 0;
	while (schet < n && src[schet] != '\0')
	{
		dest[schet] = src[schet];
		schet++;
	}
	while (schet < n)
	{
		dest[schet] = '\0';
		schet++;
	}
	return (dest);
}
