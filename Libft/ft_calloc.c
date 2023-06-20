/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:36:40 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/08 11:59:20 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*aloc;

	total = nmemb * size;
	aloc = malloc(total);
	if (aloc == NULL)
		return (aloc);
	ft_bzero(aloc, total);
	return (aloc);
}
