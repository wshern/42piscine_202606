/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:17:36 by werlim            #+#    #+#             */
/*   Updated: 2026/06/17 21:17:40 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
	char s1[] = "abcd";
	char s2[] = "abed";
	unsigned int n = 4;

	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/