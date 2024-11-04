/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:32:01 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/02 18:00:36 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putmem(unsigned long long input)
{
	char	*hex;
	int		ret;

	ret = 0;
	hex = "0123456789abcdef";
	ret = ret + ft_putstr("0x");
	if (input > 16)
	{
		ret = ret + ft_puthex(input / 16);
		ret = ret + ft_puthex(input % 16);
	}
	ret = ret + ft_putchar(hex[input % 16] + 48);
	return (ret);
}
