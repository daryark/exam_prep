#include <unistd.h>

void	first_word (char *s)
{
	int	i;

	while (*s && *s == ' ')
		s++;
	i = 0;
	while (s[i] && s[i] != ' ')
		i++;
	write (1, s, i);		
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word (argv[1]);
	write (1, "\n", 1);
	return (0);
}
