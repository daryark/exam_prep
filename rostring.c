// not done, not pass the checker in some cases
#include <unistd.h>

void	rostring (char *s)
{
	int	pos;
	int	len;
	int	i;
	
	pos = 0;
	len = 0;
	while (s[pos] == ' ')
		pos++;
	i = pos;
	while (s[i] != ' ')
		i++;
	len = i - pos;
	while (s[i] == ' ')
		i++;
	while (s[i])
	{
		while (s[i] != ' ')
			write (1, &s[i++], 1);
		while (s[i] == ' ')
			i++;
	//	if (s[i - 1] == ' ')
			write (1, " ", 1); //how to understand whether we have one word or multiple in the line. So to not put spces if only one word in the string.
	}
	write (1, &s[pos], len);
}

int	main (int argc, char **argv)
{
	if (argc > 1)
		rostring (argv[1]);
	write (1, "\n", 1);
	return (0);
}

