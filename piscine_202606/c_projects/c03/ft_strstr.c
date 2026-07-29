/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:22:56 by werlim            #+#    #+#             */
/*   Updated: 2026/06/19 02:40:44 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*updated but not resubmitted to server
*/
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	found;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		found = i;
		j = 0;
		while (to_find[i] != '\0' && to_find[j] == str[i])
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0')
			return (str + found);
		i = found + 1;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*str = "This is a test to look for a word";
	char	*to_find = "test";
	char	*result = ft_strstr(str, to_find);

	if (result == NULL)
	{
		printf("Not found.\n");
		return (0);
	}
	else
	{
	printf("%s\n", ft_strstr(str, to_find));
	}
	return (0);
}
*/
