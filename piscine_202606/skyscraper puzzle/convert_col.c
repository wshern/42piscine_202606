/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 17:44:13 by werlim            #+#    #+#             */
/*   Updated: 2026/06/21 17:44:30 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	convert_col(int grid[4][4], int col_num, int *col)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		col[row] = grid[row][col_num];
		row++;
	}
	return ;
}
