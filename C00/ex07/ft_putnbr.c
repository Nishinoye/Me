/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:30:55 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/17 17:19:46 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = nb % 10 + 48;
	write(1, &nb, 1);
}
/*
int	main(void)
{
	ft_putnbr(45);
	write(1, "\n", 1);
	ft_putnbr(-5445);
        write(1, "\n", 1);
	ft_putnbr(-2147483648);
        write(1, "\n", 1);
	ft_putnbr(4);
        write(1, "\n", 1);
	ft_putnbr(2147483647);
}
*/
