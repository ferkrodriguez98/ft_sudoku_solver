/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 11:38:34 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/01/21 18:20:15 by frodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H

int		ft_sudoku(char **argv, int row, int col);
int		ft_is_valid_puzzle(int argc, char **puzzle);
int		ft_is_valid(char number, char **puzzle, int row, int column);
void	ft_print_puzzle(char **puzzle);
char	**ft_get_puzzle(char **argv);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
