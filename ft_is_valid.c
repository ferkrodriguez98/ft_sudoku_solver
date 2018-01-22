/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 11:04:55 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/01/21 18:16:29 by frodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	ft_is_valid(char number, char **puzzle, int row, int col)
{
	int i;
	int sqrrow;
	int sqrcol;

	i = 0;
	sqrrow = 3 * (row / 3);
	sqrcol = 3 * (col / 3);
	while (i < 9)
	{
		if (puzzle[i][col] == number)
			return (0);
		if (puzzle[row][i] == number)
			return (0);
		i++;
	}
	if (puzzle[(row + 2) % 3 + sqrrow][(col + 2) % 3 + sqrcol] == number)
		return (0);
	if (puzzle[(row + 2) % 3 + sqrrow][(col + 4) % 3 + sqrcol] == number)
		return (0);
	if (puzzle[(row + 4) % 3 + sqrrow][(col + 2) % 3 + sqrcol] == number)
		return (0);
	if (puzzle[(row + 4) % 3 + sqrrow][(col + 4) % 3 + sqrcol] == number)
		return (0);
	return (1);
}
