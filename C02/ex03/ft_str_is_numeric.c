/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:47:12 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/23 09:48:13 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
		i++;
	if (str[i] == 0)
		return (1);
	return (0);
}
