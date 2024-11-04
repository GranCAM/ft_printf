/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:22:34 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/02 18:00:42 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type(const char input, va_list args)
{
	if (input == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (input == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (input == 'd' || 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (input == 'u')
		return (ft_putunsnbr(va_arg(args, unsigned int)));
	if (input == 'x')
		return (ft_puthex(va_arg(args, unsigned int)));
	if (input == 'X')
		return (ft_puthexupper(va_arg(args, unsigned int)));
	if (input == 'p')
		return (ft_putmem(va_arg(args, unsigned long long)));
	if (input == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(char const *input, ...)
{
	int		i;
	va_list	args;
	int		ret;	

	ret = 0;
	va_start(args, input);
	i = 0;
	while (input[i] != 0)
	{
		if (input[i] == '%')
		{
			ret = ret + type(input[i + 1], args);
			i = i + 2;
		}
		else
		{
			ft_putchar(input[i]);
			++i;
			++ret;
		}
	}
	va_end(args);
	return (ret);
}
