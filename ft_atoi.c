int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	sign;

	sign = 1;
	n = 0;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - '0');
	return (n * sign);
}

/*#include <stdio.h>
int	main (int argc, char **argv)
{
	if (argc == 2)
		printf("res: %d\n", ft_atoi(argv[1]));
	return (0);
}*/

