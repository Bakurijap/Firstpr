/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:17:18 by bjaparid          #+#    #+#             */
/*   Updated: 2025/03/29 14:05:34 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../../ft_libft/libft.h"
void	ft_placeholder(va_list list, char *s, size_t *count, size_t i);
void	ft_putchar(char c, size_t *count);
void	ft_putstr(char *str, size_t *count);
void	ft_putnbr(int nb, size_t *count);
int		ft_printf(const char *s, ...);
void	ft_putnbr_base(unsigned int nbr, char *base, size_t *count);
void	ft_putnbr_baseptr(unsigned long long nbr, char *base, size_t *count);
void	ft_putnbru(unsigned int nb, size_t *count);
void	ft_printp(unsigned long long n, size_t *count);
#endif 