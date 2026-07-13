/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 02:37:19 by werlim            #+#    #+#             */
/*   Updated: 2026/06/19 02:41:04 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	length(char *dest)
{
	unsigned int	len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lengthdest;
	unsigned int	lengthsrc;

	lengthdest = length(dest);
	lengthsrc = length(src);
	i = 0;
	j = length(dest);
	if (size <= lengthdest)
		return (size + lengthsrc);
	while (src[i] != '\0' && j < (size - 1))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (lengthdest + lengthsrc);
}

/*
int	main(void)
{
	char	dest[20] = "Hello";
	char	*src = " fluctuation";
	unsigned int	size = 3;

	printf("Size: %d\n", size);
	printf("Space needed/used: %d\n", ft_strlcat(dest, src, size));
	printf("After strlcat: %s\n", dest);
	return (0);
}
*/
