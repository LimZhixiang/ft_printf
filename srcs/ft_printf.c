/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:02:23 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/05 17:34:00 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_type(va_list args, char type)
{
	int	print_len;

	print_len = 0;
	if (type == 'c')
		print_len += ft_putchar(va_arg(args, int));
	else if (type == 's')
		print_len += ft_putstr(va_arg(args, char *));
	else if (type == 'p')
		print_len += ft_putptr(va_arg(args, unsigned long long));
	else if (type == 'd' || type == 'i')
		print_len += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		print_len += ft_putunnbr(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		print_len = ft_puthex(va_arg(args, unsigned int), type);
	else if (type == '%')
		print_len += ft_putchar('%');
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_len;

	print_len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			print_len += ft_type(args, str[i]);	
		}
		else
			print_len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}
