/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 21:25:18 by werlim            #+#    #+#             */
/*   Updated: 2026/06/29 21:25:19 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		strlen;
	char	*ptr;

	i = 0;
	strlen = strlength(src);
	ptr = (char *) malloc(sizeof(char) * (strlen + 1));
	if (ptr == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char *result;

	if (ac != 2)
		return (0);
	result = ft_strdup(av[1]);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/
