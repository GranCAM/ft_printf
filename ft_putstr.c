/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:32:10 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/05 15:57:03 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *input)
{
	int		i;

	i = 0;
	if (input == NULL)
		return (ft_putstr("(null)"));
	while (input[i])
	{
		ft_putchar(input[i]);
		++i;
	}
	return (i);
}
