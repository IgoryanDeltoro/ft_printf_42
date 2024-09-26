/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <ibondarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:42:30 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/26 09:27:59 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	count_ptr(uintptr_t n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static void	hendle_ptr(uintptr_t n)
{
	if (n >= 16)
	{
		hendle_ptr(n / 16);
		hendle_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd(((n - 10) + 'a'), 1);
	}
}

int	ft_print_ptr(void *ptr)
{
	uintptr_t	p;
	int			count;

	count = 0;
	p = (uintptr_t)ptr;
	if (ptr == 0)
		count += ft_print_str("(nil)");
	else
	{
		count += write(1, "0x", 2);
		hendle_ptr(p);
		count += count_ptr(p);
	}
	return (count);
}
