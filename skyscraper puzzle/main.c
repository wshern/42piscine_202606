/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 17:28:38 by werlim            #+#    #+#             */
/*   Updated: 2026/06/21 17:28:56 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		input_arr(char *str, int input[16]);
int		solve(int grid[4][4], int input[16], int pos);
void	print_result(int grid[4][4]);

int	grid_init(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	input[16];
	int	grid[4][4];

	grid_init(grid);
	if (argc != 2 || input_arr(argv[1], input) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (solve(grid, input, 0) == 1)
		print_result(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
