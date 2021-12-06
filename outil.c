/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outil.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:09:24 by mtsuji            #+#    #+#             */
/*   Updated: 2021/11/30 16:17:18 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	i;

	return (i = write(1, &c, 1));
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
			i = write(1, "(null)", 6);
	else
		i = write(1, &*str, ft_strlen(str));
	return (i);
}

int	ft_putnbr(long nb)
{
	static int	byte;
	int			byte_minus;

	byte = 0;
	byte_minus = 0;
	if (nb < 0)
	{
		byte_minus = ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	byte += ft_putchar(nb + 48);
	return (byte + byte_minus);
}
