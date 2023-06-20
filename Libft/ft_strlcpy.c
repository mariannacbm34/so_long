/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:53:58 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/02 12:03:39 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = -1;
	if (n > 0)
	{
		while (src[++i] && i < (n - 1))
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	*src = "0123456789";
	char	dest[10];
	
	printf("Dest antes do strlcpy: %s\n", dest);
	memset(dest, '\0', 10);
	strncpy(dest, src, 3);
	printf("Dest depois do strncpy: %s\n", dest);
	ft_strlcpy(dest, src, 11);
	printf("Dest depois do ft_strlcpy: %s", dest);
	return (0);
}
*/