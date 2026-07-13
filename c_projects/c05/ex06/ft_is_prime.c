/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:46:09 by werlim            #+#    #+#             */
/*   Updated: 2026/06/28 19:46:12 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//My original idea (inefficient) for this exercise:
/*
int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 1;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		j = 1;
		while (j < nb)
		{
			if (i * j == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
*/

// The more efficient, the "best" solution:

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(11));
	return (0);
}
*/
