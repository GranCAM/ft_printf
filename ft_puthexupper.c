/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:52:38 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/02 18:00:12 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(unsigned int input)
{
	char	*hex;
	int		ret;

	ret = 0;
	hex = "0123456789ABCDEF";
	if (input > 16)
	{
		ret = ret + ft_puthexupper(input / 16);
		ret = ret + ft_puthexupper(input % 16);
	}
	ret = ret + ft_putchar(hex[input % 16] + 48);
	return (ret);
}
