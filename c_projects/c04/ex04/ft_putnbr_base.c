/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 21:33:21 by werlim            #+#    #+#             */
/*   Updated: 2026/06/24 21:33:24 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

int	strlength(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_invalid(char *base)
{
	int		i;
	int		j;
	int		baselength;

	baselength = strlength(base);
	if (baselength < 2)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (j < baselength)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		basetype;
	long	lnbr;
	char	bal;
	char	mod;

	basetype = strlength(base);
	lnbr = nbr;
	if (check_invalid(base) == 1)
		return ;
	if (lnbr < 0)
	{
		write(1, "-", 1);
		lnbr = -lnbr;
	}
	if (lnbr / basetype == 0)
	{
		bal = base[lnbr];
		write(1, &bal, 1);
	}
	else
	{
		ft_putnbr_base((int)(lnbr / basetype), base);
		mod = base[(lnbr % basetype)];
		write(1, &mod, 1);
	}
}

int		ft_atoi(char *input)
{
	int		i;
	int		nve;
	int		num;

	i = 0;
	nve = 0;
	num = 0;
	while (isspace(input[i]))
	{
		i++;
	}
	while (input[i] == '+' || input[i] == '-')
	{
		if (input[i] == '-')
			nve++;
		i++;
	}
	while (input[i] >= '0' && input[i] <= '9')
	{
		num = num * 10 + (input[i] - '0');
		i++;
	}
	if (nve % 2 > 0)
		num = -num;
	return (num);
}

int		main(int argc, char **argv)
{
	int		input;
	char	*base;

	if (argc != 3)
		return (0);
	input = ft_atoi(argv[1]);
	base = argv[2];
	ft_putnbr_base(input, base);
	return (0);
}
