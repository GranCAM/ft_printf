/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:01:39 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/04 18:13:25 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	i = -12;
	unsigned int ui = 12222222;
	char c = 'c';
	char *ptr = " hola ";
	int ret;
	unsigned int	hex = 0x105d8;
	unsigned int	uphex = 0XEef4E9;

	ret = printf("op int : %d \n", i);
	printf("op ret : %d \n", ret);
	ret = ft_printf("   int : %d \n", i);
	printf("   ret : %d \n", ret);
	ret = printf("op int : %i \n", i);
	printf("op ret : %d \n", ret);
	ret = ft_printf("   int : %i \n", i);
	printf("   ret : %d \n", ret);
	ret = printf("op unint : %u \n", ui);
	printf("op ret : %d \n", ret);
	ret = ft_printf("   unint : %u \n", ui);
	printf("   ret : %d \n", ret);
	ret = printf("op char : %c \n", c);
	printf("op ret : %d \n", ret);
	ret = ft_printf("   char : %c \n", c);
	printf("   ret : %d \n", ret);
	ret = printf("op string : %s \n", ptr);
	printf("op ret : %d \n", ret);
	ret = ft_printf("   string : %s \n", ptr);
	printf("   ret : %d \n", ret);
	ret = printf("op hex : %x \n", hex);
	printf("op ret : %d \n", ret);
	ret = ft_printf("   hex : %x \n", hex);
	printf("   ret : %d \n", ret);
	ret = printf("op uphex : %X \n", uphex);
	printf("op ret : %d \n", ret);
	ret = ft_printf("   uphex : %X \n", uphex);
	printf("   ret : %d \n", ret);
	ret = printf("op mem : %p \n", NULL);
	printf("op ret : %d \n", ret);
	ret = ft_printf("   mem : %p \n", NULL);
	printf("   ret : %d \n", ret);
	ret = printf("op percent : %% \n");
	printf("op ret : %d \n", ret);
	ret = ft_printf("   precent : %% \n");
	printf("   ret : %d \n", ret);
	ret = printf("op printf : just write\n");
	printf("op ret : %d \n", ret);
	ret = ft_printf("   printf : just write\n");
	printf("   ret : %d \n", ret);
	return (0);
}