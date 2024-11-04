/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:32:10 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/02 17:47:26 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		ft_putchar(input[i]);
		++i;
	}
	return (i);
}
