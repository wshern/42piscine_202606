/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 17:13:56 by werlim            #+#    #+#             */
/*   Updated: 2026/06/21 17:14:00 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	duplicate(int grid[4][4], int row, int col, int num);
int	check_all_vis(int grid[4][4], int input[16], int row, int col);

int	solve(int grid[4][4], int input[16], int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == 16)
		return (1);
	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num >= 1 && num <= 4)
	{
		if (duplicate(grid, row, col, num) == 0)
		{
			grid[row][col] = num;
			if (check_all_vis(grid, input, row, col) == 1)
			{
				if (solve(grid, input, pos + 1) == 1)
					return (1);
			}
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
