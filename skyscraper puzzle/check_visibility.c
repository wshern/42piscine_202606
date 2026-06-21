/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 17:46:58 by werlim            #+#    #+#             */
/*   Updated: 2026/06/21 17:46:59 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	convert_col(int grid[4][4], int col_num, int *col);

int	visible_count(int *line, int start, int direction)
{
	int		j;
	int		current_max;
	int		visible;

	current_max = 0;
	visible = 0;
	j = start;
	while (j >= 0 && j < 4)
	{
		if (line[j] > current_max)
		{
			visible++;
			current_max = line[j];
		}
		j += direction;
	}
	return (visible);
}

int	check_visibility(int *line, int input, int start, int direction)
{
	if (visible_count(line, start, direction) == input)
		return (1);
	return (0);
}

int	check_all_vis(int grid[4][4], int input[16], int row, int col)
{
	int		temp_col[4];

	if (col == 3)
	{
		if (check_visibility(grid[row], input[8 + row], 0, 1) == 0
			|| check_visibility(grid[row], input[12 + row], 3, -1) == 0)
			return (0);
	}
	if (row == 3)
	{
		convert_col(grid, col, temp_col);
		if (check_visibility(temp_col, input[col], 0, 1) == 0
			|| check_visibility(temp_col, input[4 + col], 3, -1) == 0)
			return (0);
	}
	return (1);
}
