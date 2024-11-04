/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:32:01 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/04 18:09:56 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putmem(unsigned long long input)
{
	long long	temp[16];
	int			len;
	int			i;

	i = 0;
	len = ft_numhexlen(input) + 4;
	if (!input)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	while (i <= len)
	{
		temp[len - i] = input % 16;
		input = input / 16;
		++i;
	}
	i = -1;
	while (++i <= len)
	{
		if (temp[i] > 9)
			ft_putchar(temp[i] + 97 - 10);
		else
			ft_putnbr(temp[i]);
	}
	return (len + 3);
}
