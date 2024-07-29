/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:40:23 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/24 21:05:51 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		nb = nb % 10 + 48;
		write(1, &nb, 1);
	}
}
/*
#include <stdio.h>

int	main()
{
	ft_putnbr(-454);
}*/
