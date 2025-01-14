/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:24:30 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/05 17:34:23 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		i += write(1, "(null)", 6);
	else
	{
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}		
	}
	return (i);
}
