/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_puzzle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 11:28:34 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/01/21 18:14:47 by frodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"
#include <stdlib.h>

char	**ft_get_puzzle(char **argv)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	j = 0;
	if (!(str = (char **)malloc(sizeof(char *) * 9)))
		return (NULL);
	while (i < 10)
	{
		if (!(str[i - 1] = (char *)malloc(sizeof(char) * 10)))
			return (NULL);
		while (j < 10)
		{
			str[i - 1][j] = argv[i][j];
			j++;
		}
		str[i - 1][j] = '\0';
		i++;
		j = 0;
	}
	return (str);
}
