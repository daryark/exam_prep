#include <unistd.h>

void	ulstr(char *s)
{
	char	c;

	while (*s)
	{
		c = *s;
		if (*s >= 'a' && *s <= 'z')
			c -= 32;
		else if (*s >= 'A' && *s <= 'Z')
			c += 32;
		write (1, &c, 1);
		s++;
	}
}
			
int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write (1, "\n", 1);
	return (0);
}

