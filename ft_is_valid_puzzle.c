/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_puzzle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 11:05:26 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/01/21 18:16:47 by frodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	isinput(char c)
{
	if (c == '.' || (c >= '1' && c <= '9'))
		return (1);
	else
		return (0);
}

int	ft_is_valid_puzzle(int argc, char **puzzle)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc != 10)
		return (0);
	while (i < 10)
	{
		if (ft_strlen(puzzle[i]) < 9)
			return (0);
		i++;
	}
	return (1);
}
