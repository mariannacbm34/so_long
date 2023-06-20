/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:38:24 by marmonte          #+#    #+#             */
/*   Updated: 2022/10/31 15:22:56 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int arg)
{
	if (arg >= 'A' && arg <= 'Z')
		arg += 32;
	return (arg);
}
/*
int	main(void)
{
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
	char ch4 = 'a';
	printf("%c\n", ft_tolower(ch1));
	printf("%c\n", ft_tolower(ch2));
	printf("%c\n", ft_tolower(ch3));
	printf("%c\n", ft_tolower(ch4));
	return (0);
}
*/
