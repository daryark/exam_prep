#include <unistd.h>

void	alpha_mirror (char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			if (*s > (*s - 'a'))
				*s = 'z' - (*s - 'a');
			else
				*s = 'a' + ('z' - *s);
		}
		else if (*s >= 'A' && *s <= 'Z')
		{
			if (*s > (*s - 'A'))
				*s = 'Z' - (*s - 'A');
			else
				*s = 'A' + ('Z' - *s);
		}
		write (1, s, 1);
		s++;
	}
}

int	main (int c, char **arr)
{
	if (c == 2)
		alpha_mirror(arr[1]);
	write (1, "\n", 1);
	return (0);
}
