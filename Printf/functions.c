/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:13:52 by marmonte          #+#    #+#             */
/*   Updated: 2022/12/15 15:37:34 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (!str)
		str = "(null)";
	while (str[++i])
		ft_putchar(str[i]);
	return (i);
}

int	ft_putnbr(long long num, int base, int status)
{
	char	*hex1;
	char	*hex2;
	int		len;

	len = 0;
	hex1 = "0123456789abcdef";
	hex2 = "0123456789ABCDEF";
	if (num == LONG_MIN)
	{
		len += write(1, "8000000000000000", 16);
		return (len);
	}
	if (num < 0)
	{
		num = num * -1;
		len += ft_putchar('-');
	}
	if (num >= base)
		len += ft_putnbr((num / base), base, status);
	if (status == 1)
		len += write(1, &hex1[num % base], 1);
	if (status == 2)
		len += write(1, &hex2[num % base], 1);
	return (len);
}

int	ft_pointer(unsigned long long num, int base)
{
	int	len;

	len = 0;
	if (num == ULONG_MAX)
		len += write(1, "0xffffffffffffffff", 18);
	else if (num == 0)
		len += write(1, "(nil)", 5);
	else
	{
		len += write(1, "0x", 2);
		len += ft_putnbr(num, base, 1);
	}
	return (len);
}

int	ft_putnbrun(int n)
{	
	unsigned int	nbr;
	int				len;

	len = 0;
	nbr = n;
	if (nbr > 9)
	{
		len += ft_putnbrun(nbr / 10);
		len += ft_putnbrun(nbr % 10);
	}
	else if (n == 0 || (nbr > 0 && nbr <= 9))
		len += ft_putchar(nbr + 48);
	return (len);
}
