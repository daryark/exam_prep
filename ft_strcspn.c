#include <stddef.h>

size_t	ft_strcspn (const char *s, const char *reject)
{
	size_t	n;
	int	j;

	n = 0;
	while (s[n])
	{
		j = 0;
		while (reject[j])
		{
			if (s[n] == reject[j])
				return (n);
			j++;
		}
		n++;
	}
	return (n);
}

/*int	main (int argc, char **argv)
{
	if (argc == 3)
		ft_strcspn (argv[1], argv[2]);
	return (0);
}*/
