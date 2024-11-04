/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:32:06 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/05 12:26:18 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int input)
{
	unsigned int	ret;

	ret = 0;
	if (input == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (input < 0)
	{
		ret = ret + ft_putchar('-');
		input = -input;
	}
	if (input > 9)
	{
		ret = ret + ft_putnbr(input / 10);
		ret = ret + ft_putnbr(input % 10);
	}
	else
		ret = ret + ft_putchar(input + 48);
	return (ret);
}
