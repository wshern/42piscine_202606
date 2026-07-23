/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 01:51:42 by werlim            #+#    #+#             */
/*   Updated: 2026/06/17 14:43:15 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	strlength(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = strlength(src);
	if (size == 0)
		return (length);
	while (src[i] != '\0' && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

/*
int main(void)
{
	char *src = "Hello, this is a test function 123456";
	char dest[strlength(src)];
	unsigned int size = (strlength(src) + 1);

	printf("before: %s\n", src);
	printf("dest before: %s\n\n", dest);
	ft_strlcpy(dest, src, size);
	printf("after: %s\n", dest);
	return(0);
}
*/
