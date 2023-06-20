/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:27:53 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/07 12:48:13 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	t_char	*str;

	str = (t_char *)s;
	i = -1;
	while (++i < n)
		if (str[i] == (t_char)c)
			return ((void *)(str + i));
	return (0);
}
