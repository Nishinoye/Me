/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:13:08 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/08/07 17:55:22 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_join(char **strs, char *sep,int size, char *s1, int i, int c, int space)
{
    int    j;

    j = 0;
    i = 0;
    while (i < size)
    {
        c = 0;
        space = 0;
        while (strs[i][c])
        {
            s1[j] = strs[i][c];
            j++;
            c++;
        }
        if (i + 1 == size)
            return (s1);
        while (sep[space])
        {
            s1[j] = sep[space];
            j++;
            space++;
        }
        i++;
    }
    return (s1);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *s1;
    int        c;
    int        space;
    int        i;

    space = -1;
    i = 0;
    c = 0;
    if (size == 0)
    {
        s1 = malloc (1 * sizeof(char));
        s1[0] = 0;
        return (s1);
    }
    while (i < size)
    {
        c = c + ft_strlen(strs[i]);
        i++;
        space++;
    }
    s1 = malloc ((c + (space * ft_strlen(sep)) + 1) * sizeof(char));
    s1[c + (space * ft_strlen(sep))] = 0;
    s1 = ft_join(strs, sep, size, s1, i, c, space);
    return (s1);
}

#include <stdio.h>

int    main()
{
    char *strs[] = {"abc", "defg f", "ghidfgdfg"};
    char    *str = ft_strjoin(3, strs, " 789 ");
    printf("%s", str);
}
