/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielasayuminitta <danielasayuminitta@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:47:17 by danielasayu       #+#    #+#             */
/*   Updated: 2024/04/15 16:47:19 by danielasayu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"
#include "../../inc/libft.h"

int	ft_putnbr_base(unsigned long long nb, const char *base)
{
	unsigned long long	len;
	int					count;

	count = 0;
	len = ft_strlen(base);
	if (nb >= len)
		count += ft_putnbr_base(nb / len, base);
	count += ft_putchar(base[nb % len]);
	return (count);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
