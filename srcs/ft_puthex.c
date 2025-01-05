/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:42:56 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/05 17:34:10 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthex(unsigned int n, char type)
{
	int	print_len;

	print_len = 0;
	if (n >= 16)
	{
		print_len += ft_puthex(n / 16, type);
		print_len += ft_puthex(n % 16, type);
	}
	else
	{
		if (n <= 9)
			print_len += ft_putchar(n + '0');
		else if (n >= 10 && n <= 16 && type == 'x')
			print_len += ft_putchar((n - 10) + 'a');
		else if (n >= 10 && n <= 16 && type == 'X')
			print_len += ft_putchar((n - 10) + 'A');
	}
	return (print_len);
}
