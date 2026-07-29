/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:47:02 by werlim            #+#    #+#             */
/*   Updated: 2026/06/18 19:05:43 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	check(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (i == 0 || !check(str[i - 1])))
		{
			str[i] -= 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& (i > 0 && check(str[i - 1])))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	int i;
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("before:\n%s\n\n", str);
	ft_strcapitalize(str);
	printf("after:\n%s\n", str);

	return(0);
}
*/
