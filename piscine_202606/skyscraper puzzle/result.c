/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 17:50:51 by werlim            #+#    #+#             */
/*   Updated: 2026/06/21 17:50:52 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_result(int grid[4][4])
{
	int		row;
	int		col;
	char	num;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			num = grid[row][col] + '0';
			write(1, &num, 1);
			if (col != 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
	return ;
}
