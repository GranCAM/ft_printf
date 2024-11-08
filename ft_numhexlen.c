/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numhexlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:25:24 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/05 16:16:08 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numhexlen(unsigned long long input)
{
	int	i;

	i = 0;
	while (input > 15)
	{
		input = input / 16;
		++i;
	}
	return (i);
}
