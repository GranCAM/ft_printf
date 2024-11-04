/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:31:38 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/04 16:55:27 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int input)
{
	int		*temp;
	int		len;
	int		i;

	i = 0;
	len = ft_numhexlen(input);
	temp = malloc(sizeof(int) * len);
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
	free (temp);
	return (len + 1);
}
