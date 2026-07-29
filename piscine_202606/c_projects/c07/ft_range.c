/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 16:27:00 by werlim            #+#    #+#             */
/*   Updated: 2026/06/30 16:27:02 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	arrlength;
	int	*arr;

	i = 0;
	arrlength = max - min;
	if (min >= max)
		return (NULL);
	arr = (int *) malloc(sizeof(int) * arrlength);
	if (arr == NULL)
		return (NULL);
	while (i < arrlength)
	{
		arr[i++] = min++;
	}
	return (arr);
}

/*
int ft_atoi(char *str)
{
	int i;
	int	nve;
	int	num;

	nve = 0;
	num = 0;
	i = 0;
	while (str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
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

#include <stdio.h>
int	main(int ac, char **av)
{
	int	min;
	int	max;
	int	*result;
	int	i;

	if (ac != 3)
	{
		printf("Need 'Min' 'Max' Input");
		return (0);
	}
	min = ft_atoi(av[1]);
	max = ft_atoi(av[2]);
	result = ft_range(min, max);
	if (result == NULL)
	{
		printf("NULL");
		return (0);
	}
	i = 0;
	printf("Result:\n");
	while (i < (max - min - 1))
	{
		printf("%d, ", result[i]);
		i++;
	}
	printf("%d\n", result[i]);
	return(0);
}
*/
