#include <unistd.h>

void	rot_13(char *s)
{
	char	c;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			c = *s + 13;
			if ((*s >= 'a' && *s <= 'z' && c > 122) || (*s >= 'A' && *s <= 'Z' && c > 90))
				c -= 32;
		}
		else
			c = *s;
		write (1, &c, 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write (1, "\n", 1);
	return (0);
}
