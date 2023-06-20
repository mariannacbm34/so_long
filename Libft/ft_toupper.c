/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:09:51 by marmonte          #+#    #+#             */
/*   Updated: 2022/10/31 15:23:06 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
		arg -= 32;
	return (arg);
}
/*
int	main(void)
{
	char ch1 = 'a';
	char ch2 = 'f';
	char ch3 = 'B';
	char ch4 = 'Z';
	printf("%c\n", ft_toupper(ch1));
	printf("%c\n", ft_toupper(ch2));
	printf("%c\n", ft_toupper(ch3));
	printf("%c\n", ft_toupper(ch4));
	return (0);
}
*/