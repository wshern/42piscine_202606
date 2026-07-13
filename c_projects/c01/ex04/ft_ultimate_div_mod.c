/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 17:39:27 by werlim            #+#    #+#             */
/*   Updated: 2026/06/15 17:45:10 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
int	main(void)
{
	int	a = 10;
	int	b = 3;

	printf("a before: %d\n", a);
	printf("b before: %d\n", b);

	ft_ultimate_div_mod(&a, &b);
	printf("a after: %d\n", a);
	printf("b after: %d\n", b);

	return(0);
}
*/
