/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:29:51 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/09 12:22:47 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big && len-- >= i)
	{
		if (*big == *little && ft_memcmp(big, little, i) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
