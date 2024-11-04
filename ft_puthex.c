/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:31:38 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/02 18:00:06 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int input)
{
	char	*hex;
	int		ret;

	ret = 0;
	hex = "0123456789abcdef";
	if (input > 16)
	{
		ret = ret + ft_puthex(input / 16);
		ret = ret + ft_puthex(input % 16);
	}
	ret = ret + ft_putchar(hex[input % 16] + 48);
	return (ret);
}
