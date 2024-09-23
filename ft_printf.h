/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:43:46 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/23 22:22:13 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <limits.h>
# include "./libft/libft.h"

int ft_printf(const char *format, ...);
int	ft_putchar(char c);
int ft_hendle_args(va_list args, char format);
int ft_putstr(char *s);

#endif