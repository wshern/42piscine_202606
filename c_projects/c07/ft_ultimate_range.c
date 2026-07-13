/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:35:44 by werlim            #+#    #+#             */
/*   Updated: 2026/07/01 16:35:45 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	arrlength;
	int	i;

	i = 0;
	arrlength = max - min;
	if (min >= max)
		return (0);
	*range = (int *) malloc(sizeof(int) * arrlength);
	if (*range == NULL)
		return (-1);
	while (i < arrlength)
	{
		(*range)[i++] = min++;
	}
	return (arrlength);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	arr = NULL;
	size = ft_ultimate_range(&arr, 37, 100);
	printf("Size: %d\n", size);
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
