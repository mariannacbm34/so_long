/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:21 by marmonte          #+#    #+#             */
/*   Updated: 2022/12/06 12:32:15 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		l_words;
	int		e_words;
	char	**aux;

	e_words = count_words(s, c);
	aux = ft_calloc(sizeof(char *), (e_words + 1));
	if (!aux)
		return (0);
	l_words = 0;
	i = 0;
	while (l_words < e_words)
	{
		j = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i + j] != '\0' && s[i + j] != c)
			j++;
		aux[l_words++] = ft_substr(s, i, j);
		i = i + j;
	}
	return (aux);
}

/*int main (void)
{
	char	**ret;

	ret = ft_split("", '\0');
	while (*ret)
	{
		printf("%s\n", *ret);
		ret++;
	}
	return (0);
}*/
