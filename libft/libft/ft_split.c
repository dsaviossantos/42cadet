/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:27:09 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/16 20:27:10 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	skip(char *s, char c, int *i, int flag)
{
	if (flag == 1)
		while (s[*i] == c && s[*i] != '\0')
			*i += 1;
	else if (flag == 2)
		while (s[*i] != c && s[*i] != '\0')
			*i += 1;
}

static int	word_counter(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		skip(s, c, &i, 1);
		if (s[i] != '\0')
			count++;
		skip(s, c, &i, 2);
	}
	return (count);
}

void	search_word(char *s, char c, int *k, int i)
{
	int	count_words;

	count_words = 0;
	skip(s, c, k, 1);
	while (count_words < i)
	{
		skip(s, c, k, 2);
		count_words++;
		skip(s, c, k, 1);
	}
}

static char	*allocate_and_fill_elem(char *str, char *s, char c, int i)
{
	int	k;
	int	j;
	int	count;

	k = 0;
	count = 0;
	search_word(s, c, &k, i);
	j = k;
	while (s[j] != c && s[j] != '\0')
	{
		count++;
		j++;
	}
	str = (char *)malloc((count * sizeof(char)) + 1);
	if (!(str))
		return (NULL);
	str[count] = '\0';
	j = 0;
	while (s[k] != c && s[k] != '\0')
		str[j++] = s[k++];
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count_words;
	char	**arr;

	if (s == NULL)
		return (NULL);
	count_words = word_counter((char *)s, c);
	arr = (char **)malloc((count_words + 1) * (sizeof(char *)));
	if (!(arr))
		return (NULL);
	arr[count_words] = NULL;
	i = -1;
	while (++i < count_words)
	{
		arr[i] = allocate_and_fill_elem(arr[i], (char *)s, c, i);
		if (!(arr[i]))
		{
			i = 0;
			while (i < count_words)
				free(arr[i++]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
