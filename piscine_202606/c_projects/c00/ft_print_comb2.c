#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			b1 = b / 10 + '0';
			b2 = b % 10 + '0';
			a1 = a / 10 + '0';
			a2 = a % 10 + '0';
			write(1, &a1, 1);
			write(1, &a2, 1);
			write(1, " ", 1);
			write(1, &b1, 1);
			write(1, &b2, 1);
			write(1, ", ",2);
			b++;
		}
		a++;
	}
	 
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}