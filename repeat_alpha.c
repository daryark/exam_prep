#include <unistd.h>

void	repeat_alpha(char *s)
{
	int	times;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			times = *s - 'a' + 1;
		else if (*s >= 'A' && *s <= 'z')
			times = *s - 'A' + 1;
		else
			times = 1;
		while (--times >= 0)
			write (1, s, 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write (1, "\n", 1);
	return (0);
}
