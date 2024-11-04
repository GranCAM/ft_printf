/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:01:39 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/02 18:07:16 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	i = 12;
	unsigned int ui = 122222222;
	char c = 'c';
	char ptr[10] = "hola cara";
	char *ptr2;
	int ret;

	ret = printf(" int : %d \n", i);
	printf(" ret : %d \n", ret);
	ret = ft_printf(" int : %d \n", i);
	printf(" ret : %d \n", ret);
	return (0);
}