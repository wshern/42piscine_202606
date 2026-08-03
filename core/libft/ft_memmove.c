/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:48:54 by werlim            #+#    #+#             */
/*   Updated: 2026/08/03 17:56:02 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len) 
{
	size_t		i;
	unsigned char 		*p_dest;
	const unsigned char	*p_src;

	if (dest == NULL && src == NULL)
		return (dest);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
	{
		i = len;
		while (i-- > 0)
			p_dest[i] = p_src[i];
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

static void	print_result(const char *test_name, char *my_res, char *std_res, size_t len)
{
	if (memcmp(my_res, std_res, len) == 0)
		printf("[OK]   %-25s | Output: \"%s\"\n", test_name, my_res);
	else
		printf("[FAIL] %-25s | Output: \"%s\" (Expected: \"%s\")\n",
			test_name, my_res, std_res);
}

int	main(void)
{
	char	buf1[30];
	char	buf2[30];

	printf("=== Testing ft_memmove ===\n\n");

	// Test 1: No overlap (Standard copy)
	strcpy(buf1, "Hello 42");
	strcpy(buf2, "Hello 42");
	ft_memmove(buf1 + 10, buf1, 8);
	memmove(buf2 + 10, buf2, 8);
	print_result("1. No overlap", buf1 + 10, buf2 + 10, 8);

	// Test 2: Overlap with dst > src (Must copy BACKWARDS)
	// buf1 starts as "0123456789". We copy "01234" to position index 2.
	// Expected result: "0101234789"
	strcpy(buf1, "0123456789");
	strcpy(buf2, "0123456789");
	ft_memmove(buf1 + 2, buf1, 5);
	memmove(buf2 + 2, buf2, 5);
	print_result("2. Overlap (dst > src)", buf1, buf2, 10);

	// Test 3: Overlap with src > dst (Must copy FORWARDS)
	// buf1 starts as "0123456789". We copy "23456" to position index 0.
	// Expected result: "2345656789"
	strcpy(buf1, "0123456789");
	strcpy(buf2, "0123456789");
	ft_memmove(buf1, buf1 + 2, 5);
	memmove(buf2, buf2 + 2, 5);
	print_result("3. Overlap (src > dst)", buf1, buf2, 10);

	// Test 4: size = 0
	strcpy(buf1, "abcdef");
	strcpy(buf2, "abcdef");
	ft_memmove(buf1 + 1, buf1, 0);
	memmove(buf2 + 1, buf2, 0);
	print_result("4. Size = 0", buf1, buf2, 6);

	// Test 5: NULL pointers (should not crash if size is 0)
	// Note: Standard memmove behavior with NULLs and size > 0 is undefined (usually segfaults).
	// We only test size = 0 to ensure your guards are correct.
	ft_memmove(NULL, NULL, 0);
	printf("[OK]   %-25s | Passed without crashing\n", "5. NULL protection (n=0)");

	return (0);
}*/