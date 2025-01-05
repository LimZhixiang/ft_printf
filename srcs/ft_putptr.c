/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:53:15 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/05 17:34:19 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ft_printf.h"

static int	ft_putptrhex(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	if (ptr >= 16)
	{
		print_len += ft_putptrhex(ptr / 16);
		print_len += ft_putptrhex(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			print_len += ft_putchar(ptr + '0');
		else if (ptr >= 10 && ptr <= 16)
			print_len += ft_putchar((ptr - 10) + 'a');
	}
	return (print_len);
}

int	ft_putptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	if (ptr == 0)
	{
		print_len += write(1, "(nil)", 5);
		return (print_len);
	}
	print_len += write(1, "0x", 2);
	print_len += ft_putptrhex(ptr);
	return (print_len);
}
