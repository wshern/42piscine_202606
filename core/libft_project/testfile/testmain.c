#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

static void test_strlen(void)
{
	char *a = "test123";
	char *b = "";
	char *c = "This is a very long string that totals at 44";

	if (ft_strlen(a) != strlen(a))
	{
		printf("ft_strlen error - short\n");
		return;
	}
	else if (ft_strlen(b) != strlen(b))
	{
		printf("ft_strlen error - empty\n");
		return;
	}
	else if (ft_strlen(c) != strlen(c))
	{
		printf("ft_strlen error - long\n");
		return;
	}
	else
		printf("ft_strlen OK!\n");
}

static void	test_isalpha(void)
{
	int	i;

	i = -10;
	while (i < 300)
	{
		if (!!ft_isalpha(i) != !!isalpha(i))
		{
			printf("ft_isalpha FAIL at %d\n", i);
			return ;
		}
		i++;
	}
	printf("ft_isalpha OK!\n");
}

static void	test_isdigit(void)
{
	int	i;

	i = -10;
	while (i < 300)
	{
		if (!!ft_isdigit(i) != !!isdigit(i))
		{
			printf("ft_isdigit FAIL at %d\n", i);
			return ;
		}
		i++;
	}
	printf("ft_isdigit OK!\n");
}

static void	test_isalnum(void)
{
	int	i;

	i = -10;
	while (i < 300)
	{
		if (!!ft_isalnum(i) != !!isalnum(i))
		{
			printf("ft_isalnum FAIL at %d\n", i);
			return ;
		}
		i++;
	}
	printf("ft_isalnum OK!\n");
}

static void	test_isascii(void)
{
	int	i;

	i = -10;
	while (i < 300)
	{
		if (!!ft_isascii(i) != !!isascii(i))
		{
			printf("ft_isascii FAIL at %d\n", i);
			return ;
		}
		i++;
	}
	printf("ft_isascii OK!\n");
}

static void	test_isprint(void)
{
	int	i;

	i = -10;
	while (i < 300)
	{
		if (!!ft_isprint(i) != !!isprint(i))
		{
			printf("ft_isprint FAIL at %d\n", i);
			return ;
		}
		i++;
	}
	printf("ft_isprint OK!\n");
}

static void test_memset(void)
{
	char ctrl[20];
	char test[20];

	memset(ctrl, 'X', 20);
	if (ft_memset(test, 'X', 20) != test)
		printf("ft_memset FAIL - return value!\n");
	else if (memcmp(ctrl, test, 20) != 0)
		printf("ft_memset FAIL - content!\n");
	memset(ctrl, 'A', 20);
	memset(test, 'A', 20);
	ft_memset(test, 'Z', 0);
	if (memcmp(ctrl, test, 20) != 0)
		printf("ft_memset FAIL: n=0\n");
	memset(ctrl, 200, 10);
	ft_memset(test, 200, 10);
	if (memcmp(ctrl, test, 10) != 0)
		printf("ft_memset FAIL: value > 127\n");
	else
		printf("ft_memset OK!\n");
}

static void test_bzero(void)
{
	char ctrl[20];
	char test[20];

	memset(ctrl, 'a', 20);
	memset(test, 'a', 20);
	bzero(ctrl, 20);
	ft_bzero(test, 20);
	if (memcmp(ctrl, test, 20) != 0)
		printf("ft_bzero FAIL: content!\n");
	else
		printf("ft_bzero OK!\n");
}

static void test_memcpy(void)
{
	char ctrl[20];
	char test[20];
	char src[] = "abc\0de";

	memcpy(ctrl, src, 7);
	if (ft_memcpy(test, src, 7) != test)
	{
		printf("ft_memcpy FAIL - return value!\n");
		return;
	}
	else if (memcmp(ctrl, test, 7) != 0)
	{
		printf("ft_memcpy FAIL - content!\n");
		return;
	}
	memset(ctrl, 'A', 20);
	memset(test, 'A', 20);
	ft_memcpy(test, src, 0);
	if (memcmp(ctrl, test, 20) != 0)
		printf("ft_memcpy FAIL - wrote when n=0\n");
	else
		printf("ft_memcpy OK!\n");
}

int	main(void)
{
	test_strlen();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_memset();
	test_bzero();
	test_memcpy();
	return (0);
}