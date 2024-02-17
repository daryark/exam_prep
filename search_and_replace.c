#include <unistd.h>

void	search_and_replace(char *s, char r1, char r2)
{
	while (*s)
	{	if (*s == r1)
			*s = r2;
		write (1, s, 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 4)
		search_and_replace(argv[1], *argv[2], *argv[3]);
	write (1, "\n", 1);
	return (0);
}

