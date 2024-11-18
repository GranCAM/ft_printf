/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:22:34 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/05 15:54:03 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type(const char input, va_list args)
{
	if (input == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (input == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (input == 'd' || input == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (input == 'u')
		return (ft_putunsnbr(va_arg(args, unsigned int)));
	else if (input == 'x')
		return (ft_puthex(va_arg(args, unsigned int)));
	else if (input == 'X')
		return (ft_puthexupper(va_arg(args, unsigned int)));
	else if (input == 'p')
		return (ft_putmem(va_arg(args, unsigned long long)));
	else if (input == '%')
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
		if (input[i] == '%' && input[i + 1])
		{
			ret = ret + type(input[i + 1], args);
			i = i + 1;
		}
		else
			ret = ret + ft_putchar(input[i]);
		++i;
	}
	va_end(args);
	return (ret);
}
