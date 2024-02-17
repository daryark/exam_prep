#include <stdio.h>
#include <stdlib.h>

void	pgcd (int n1, int n2)
{
	int	pgcd;

	if (n1 < n2)
		pgcd = n1;
	else
		pgcd = n2;
	while (pgcd > 1)
	{
		if (n1 % pgcd == 0 && n2 % pgcd == 0)
			break ;
	pgcd--;
	}
	printf("%d", pgcd);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
