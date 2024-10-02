/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <ibondarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:37:35 by igoryan           #+#    #+#             */
/*   Updated: 2024/09/26 09:27:59 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_unsig(unsigned int n)
{
	char	*buff;
	int		len;
	int		i;

	len = ft_get_length(n, 10);
	buff = ft_calloc(len + 1, sizeof(char));
	i = len - 1;
	if (n == 0)
		buff[i] = '0';
	while (n)
	{
		buff[i--] = (n % 10) + 48;
		n /= 10;
	}
	ft_print_str(buff);
	free(buff);
	return (len);
}
