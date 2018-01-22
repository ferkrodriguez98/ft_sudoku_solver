/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 11:31:28 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/01/21 17:57:40 by ssnelgro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	main(int argc, char **argv)
{
	char **puzzle;

	if (ft_is_valid_puzzle(argc, argv))
	{
		puzzle = ft_get_puzzle(argv);
		ft_sudoku(puzzle, 0, 0);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
