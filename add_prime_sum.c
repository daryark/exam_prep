#include <unistd.h>

int	ft_atoi (char *s)
{
	int	n;
	int	sign;

	sign = 1;
	n = 0;
	if (*s == '-' && *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
		n = (n * 10) + (*s++ - '0');
	return (n * sign);
}

void	ft_itoa (int n)
{
	char	res;

	res = '0';
	if (n < 10)
	{
		res += n;
		write (1, &res, 1);
	}
	else
	{
		ft_itoa (n / 10); 
		ft_itoa (n % 10);
	}
}

int	add_prime_number (int	n)
{
	int	sum;
	int		i;

	i = n - 1;
	sum = 0;
	if (n > 1)
	{
		while (n % i != 0)
			i--;
		if (i == 1)
			sum += n;
		sum += add_prime_number (--n);
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2 && ft_atoi(argv[1]) > 0)
		ft_itoa(add_prime_number (ft_atoi(argv[1])));
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
