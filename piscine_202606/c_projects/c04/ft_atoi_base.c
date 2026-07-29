/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:24:02 by werlim            #+#    #+#             */
/*   Updated: 2026/06/25 19:24:04 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_invalid(char *base)
{
	int	i;
	int	j;
	int	basetype;

	i = 0;
	basetype = length(base);
	if (basetype < 2)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\t' || base[i] == '\n' || base[i] == '\r'
			|| base[i] == '\f' || base[i] == '\v')
			return (1);
		j = i + 1;
		while (j < basetype)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	whtspc_sign(char *str, int i, int *nve)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			(*nve)++;
		i++;
	}
	return (i);
}

int	atoi_logic(char *str, char *base, int i)
{
	int	j;
	int	num;

	num = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] != base[j])
				j++;
			else
			{
				num = num * length(base) + j;
				break ;
			}
		}
		if (j == length(base))
			break ;
		else
			i++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nve;
	int	num;

	if (check_invalid(base) == 1)
		return (0);
	nve = 0;
	num = 0;
	i = 0;
	i = whtspc_sign(str, i, &nve);
	num = atoi_logic(str, base, i);
	if (nve % 2 > 0)
		num = -num;
	return (num);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*base;
	int		basetype;
	if (argc != 3)
	{
		printf("Invalid Input\n");
		return (0);
	}
	str = argv[1];
	base = argv[2];
	basetype = length(base);
	printf("Input: %s\n", str);
	printf("Base Str: %s\n", base);
	printf("Base Type: %d\n\n", basetype);
	//if (ft_atoi_base(str, base) == 0)
	//{
	//	printf("Base Error\n");
	//	return (0);
	//}
	printf("Result: %d\n", ft_atoi_base(str, base));
	return (0);
}
