/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:58:16 by werlim            #+#    #+#             */
/*   Updated: 2026/06/23 17:58:18 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nve;
	int	num;

	nve = 0;
	num = 0;
	i = whitespace(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nve++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (nve % 2 > 0)
		num = -num;
	return (num);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	printf("Result: %d\n", ft_atoi(argv[1]));
	return (0);
}
*/