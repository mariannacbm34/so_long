/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:07:48 by marmonte          #+#    #+#             */
/*   Updated: 2022/12/16 14:01:05 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			len += ft_format(str[i], arg);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}

int	ft_format(char str, va_list arg)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += ft_putchar((char)va_arg(arg, int));
	else if (str == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (str == 'p')
		len += ft_pointer(va_arg(arg, unsigned long long), 16);
	else if (str == 'd' || str == 'i')
		len += ft_putnbr((long long)va_arg(arg, int), 10, 1);
	else if (str == 'u')
		len += ft_putnbrun(va_arg(arg, unsigned int));
	else if (str == 'x')
		len += ft_putnbr((long long)va_arg(arg, unsigned int), 16, 1);
	else if (str == 'X')
		len += ft_putnbr((long long)va_arg(arg, unsigned int), 16, 2);
	else if (str == '%')
		len += ft_putchar('%');
	return (len);
}

/*int	main(void)
 {
	void	*ptr = NULL;

	printf("meu x = %d\n", ft_printf("%x\n", 12345678));
	printf("teu x = %d\n", printf("%x\n", 12345678));
	ft_printf("%d\n", 12345678);
	printf("%d\n", 12345678);
	ft_printf("%s\n", "hello");
	printf("%s\n", "hello");
	ft_printf("%X\n", 12345678);
	printf("%X\n", 12345678);
	printf("meu c = %d\n", ft_printf("%c\n", '0'));
	printf("teu c = %d\n", printf("%c\n", '0'));
	ft_printf("%p\n", &ptr);
	printf("%p\n", &ptr);
}
*/