/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:55:38 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/21 18:34:25 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c);

void	line(int x, char *str)
{
	int	i;

	i = 0;
	if (x == 1)
		ft_putchar(str[0]);
	else if (x == 2)
	{
		ft_putchar(str[0]);
		ft_putchar(str[2]);
	}
	else
	{
		ft_putchar(str[0]);
		while (i < x - 2)
		{
			ft_putchar(str[1]);
			i++;
		}
		ft_putchar(str[2]);
	}
	ft_putchar('\n');
}

char	*prototype_first_line(int index)
{
	if (index == 0)
		return ("o-o");
	if (index == 1)
		return ("/*\\");
	if (index == 2)
		return ("ABA");
	if (index == 3 || index == 4)
		return ("ABC");
}

char	*prototype_middle(int index)
{
	if (index == 0)
		return ("| |");
	if (index == 1)
		return ("* *");
	if (index == 2 || index == 3 || index == 4)
		return ("B B");
}

char	*prototype_last_line(int index)
{
	if (index == 0)
		return ("o-o");
	if (index == 1)
		return ("\\*/");
	if (index == 2)
		return ("CBC");
	if (index == 3)
		return ("ABC");
	if (index == 4)
		return ("CBA");
}

void	rush(int index, int x, int y)
{
	int		i;
	char	*str;

	i = 0;
	str = prototype_first_line(index);
	line(x, str);
	str = prototype_middle(index);
	while (i < y - 2)
	{
		line(x, str);
		i++;
	}
	if (y > 1)
	{
		str = prototype_last_line(index);
		line(x, str);
	}
}
