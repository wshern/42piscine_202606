/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 17:49:30 by werlim            #+#    #+#             */
/*   Updated: 2026/06/21 17:49:33 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	input_arr(char *str, int input[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			input[j] = str[i] - '0';
			j++;
			if(str[i + 1] != ' ' && str[i + 1] != '\0')
				return (0);
		}
		else if (str[i] == ' ')
			;
		else
			return (0);
		i++;
	}
	if (i != 31 || j != 16)
		return (0);
	return (1);
}
