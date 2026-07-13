/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 13:07:05 by werlim            #+#    #+#             */
/*   Updated: 2026/06/15 16:12:01 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 10;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d\n; b = %d\n", a, b);
	printf("div = %d\n; mod = %d\n", div, mod);
}
*/
