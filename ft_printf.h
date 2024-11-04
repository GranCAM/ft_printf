/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:27:06 by carbon-m          #+#    #+#             */
/*   Updated: 2024/11/05 16:19:32 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>

int		ft_printf(char const *input, ...);
int		ft_putchar(int input);
int		ft_putstr(char *input);
int		ft_putnbr(int input);
int		ft_putunsnbr(unsigned int input);
int		ft_numhexlen(unsigned long long input);
int		ft_puthex(unsigned int input);
int		ft_puthexupper(unsigned int input);
int		ft_putmem(unsigned long long input);

#endif