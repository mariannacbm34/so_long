/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:15:46 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/23 15:30:22 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*ptr;
	unsigned int		i;

	i = -1;
	ptr = ft_strdup(s);
	if (!ptr)
		return (0);
	while (ptr[++i])
		ptr[i] = f(i, ptr[i]);
	return (ptr);
}
