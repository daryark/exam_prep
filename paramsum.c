#include <unistd.h>

void	ft_itoa (int n)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_itoa (n / 10);
		ft_itoa (n % 10);
	}
}

int	main (int argc, char **argv)
{
	if (argc == 1)
		write (1, "0", 1);
	else
		ft_itoa (argc - 1);
	write (1, "\n", 1);
	return (0);
}
