/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <ibondarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:48:14 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/23 15:45:31 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*p;
	char		*s;
	int			i;

	va_start(args, format);
	p = format;
	while (*p)
	{
		if (*p == '%')
		{
			p++; // Move to the format specifier
			while (*p)
			{
			    if (*p == 's')
				{
					s = va_arg(args, char *);
					printf("%s", s);
					break ;
				}
				else if (*p == 'd')
				{
					i = va_arg(args, int);
					printf("%d", i);
					break ;
				}
				else if (*p == 'c')
				{
					char c = (char)va_arg(args, int);
						// Note: char is promoted to int in varargs
					ft_putchar_fd(c, 1);
					break ;
				}
                else 
                {
				ft_putchar_fd('%', 1);
				ft_putchar_fd(*p, 1);
                }
			}
		}
		else
		{
			ft_putchar_fd(*p, 1);
		}
        p++;
	}
	va_end(args);
    return (i);
}
