/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:48:06 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/09 12:26:27 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	size_t	result;
	int		sinal;
	int		i;

	i = 0;
	sinal = 1;
	result = 0;
	while (str[i] && ((str[i] > 8 && str[i] < 14) || str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal = -1;
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
		result = (result * 10) + str[i++] - 48;
	return (result * sinal);
}

/*int main (void)
{
	printf("%d\n", ft_atoi("-1234"));
}
*/