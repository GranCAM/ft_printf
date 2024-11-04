/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:32:13 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/02 17:47:28 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsnbr(unsigned int input)
{
	int	ret;

	ret = 0;
	if (input > 9)
	{
		ret = ret + ft_putunsnbr(input / 10);
	}
	ret = ret + ft_putchar(input % 10 + 48);
	return (ret);
}
