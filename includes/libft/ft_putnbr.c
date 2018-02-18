/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:30:04 by isy               #+#    #+#             */
/*   Updated: 2016/11/24 18:30:08 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int	i;

	i = nb;
	if (i == -2147483648)
		ft_putstr("-2147483648");
	if (i == 2147483647)
		ft_putstr("2147483647");
	if (i == -2147483648 || i == 2147483647)
		return ;
	if (i < 0)
	{
		write(1, "-", 1);
		i = i * -1;
	}
	if (i >= 10)
		ft_putnbr(i / 10);
	i = i % 10 + '0';
	write(1, &i, 1);
}
