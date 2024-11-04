/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:27:06 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/02 18:00:48 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(char const *input, ...);
int		ft_putchar(int input);
int		ft_putstr(char *input);
int		ft_putnbr(int input);
int		ft_putunsnbr(unsigned int input);
int		ft_puthex(unsigned int input);
int		ft_puthexupper(unsigned int input);
int		ft_putmem(unsigned long long input);

#endif