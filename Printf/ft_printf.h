/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:07:34 by marmonte          #+#    #+#             */
/*   Updated: 2022/12/15 15:12:04 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

int		ft_putstr(char *str);
int		ft_putnbr(long long num, int base, int status);
int		ft_pointer(unsigned long long num, int base);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbrun(int n);
int		ft_format(char str, va_list arg);

#endif