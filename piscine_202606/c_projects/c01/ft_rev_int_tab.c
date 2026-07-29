/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:22:26 by werlim            #+#    #+#             */
/*   Updated: 2026/06/15 19:24:29 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
int main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int	size = 6;
	int	i;

	i = 0;
	printf("before: %d\n", tab[i]);
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("after: %d", tab[i]);
		i++;
	}
	printf("\n");
}
*/
