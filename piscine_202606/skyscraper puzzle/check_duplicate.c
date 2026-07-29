/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 17:46:16 by werlim            #+#    #+#             */
/*   Updated: 2026/06/21 17:46:18 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	duplicate(int grid[4][4], int row, int col, int num)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (1);
		i++;
	}
	j = 0;
	while (j < 4)
	{
		if (grid[j][col] == num)
			return (1);
		j++;
	}
	return (0);
}
