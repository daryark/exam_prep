#include <unistd.h>

void	hidenp (char *s2, char *s1)
{
	while (*s1)
	{
		if (*s1 == *s2)
			s2++;
		if (!*s2)
		{
			write (1, "1", 1);
			return ;
		}
		s1++;
	}
	write (1, "0", 1);
}

int	main (int argc, char **argv)
{
	if (argc == 3)
		hidenp (argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
