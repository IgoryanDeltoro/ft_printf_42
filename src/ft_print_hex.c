/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <ibondarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:51:38 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/26 09:27:59 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_hex(unsigned int n, char format)
{
	char	*hex_dig;
	char	*buff;
	int		len;
	int		i;

	len = ft_get_length(n, 16);
	buff = ft_calloc(len + 1, sizeof(char));
	if (format == 'X')
		hex_dig = "0123456789ABCDEF";
	else if (format == 'x')
		hex_dig = "0123456789abcdef";
	i = len - 1;
	if (n == 0)
		buff[i] = '0';
	while (n)
	{
		buff[i--] = hex_dig[n % 16];
		n /= 16;
	}
	ft_print_str(buff);
	free(buff);
	return (len);
}
