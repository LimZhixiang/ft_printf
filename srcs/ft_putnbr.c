/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:34:21 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/05 17:34:14 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	int	print_len;

	print_len = 0;
	if (n == -2147483648)
	{
		print_len += write(1, "-2147483648", 11);
		return(print_len);
	}
	if (n < 0)
	{
		print_len += write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		print_len += ft_putnbr(n / 10);
		print_len += ft_putnbr(n % 10);
	}
	else if (n <= 9)
		print_len += ft_putchar((n % 10) + '0');
	return (print_len);
}
