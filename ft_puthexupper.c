/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:52:38 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/04 18:00:09 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(unsigned int input)
{
	int		temp[16];
	int		len;
	int		i;

	i = 0;
	len = ft_numhexlen(input);
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
			ft_putchar(temp[i] + 65 - 10);
		else
			ft_putnbr(temp[i]);
	}
	return (len + 1);
}
