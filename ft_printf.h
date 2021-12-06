/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:11:25 by mtsuji            #+#    #+#             */
/*   Updated: 2021/12/04 11:22:13 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <ctype.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_count
{
	int		byte;
	int		index;
	va_list	argument;
}	t_count;

int		ft_printf(const char *format, ...);
int		print_char(const char **format, va_list list);
int		ft_putchar(char c);
int		ft_strlen(const char *str);
int		ft_putstr(char *str);
int		ft_putnbr(long nb);
void	conversion_checker(char *format, t_count *count);
void	print_before_sign(char *format, t_count *count);
int		to_hexadecimal(unsigned long long nb, char conversion);
int		print_pointer(void *nb, char format);

#endif
