/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:25:51 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/30 15:01:32 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	while (str[i])
	{
		i++;
		if ((str[i] >= 97 && str[i] <= 122)
			&& (str[i - 1] < 48
				|| (str[i - 1] > 57 && str[i - 1] < 65)
				|| (str[i - 1] > 90 && str[i - 1] < 97)
				|| str[i] > 122))
			str[i] = str[i] - 32;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "4cf +er /dfg *df -df \\df f";
	ft_putstr(ft_str_capitalize(str));
}
*/
