/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:09:21 by werlim            #+#    #+#             */
/*   Updated: 2026/06/23 17:09:23 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	bal;
	char	mod;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb / 10 == 0)
	{
		bal = nb + '0';
		write(1, &bal, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		mod = ((nb % 10) + '0');
		write(1, &mod, 1);
	}
}

/*
int	main(void)
{
	ft_putnbr(-10938)
	return(0);
}
*/
