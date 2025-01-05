/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:05:13 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/05 17:34:27 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunnbr(unsigned int n)
{
	int	print_len;

	print_len = 0;
	if (n > 9)
	{
		print_len += ft_putunnbr(n / 10);
		print_len += ft_putunnbr(n % 10);
	}
	if (n < 10)
		print_len += ft_putchar(n + '0');
	return (print_len);
}
