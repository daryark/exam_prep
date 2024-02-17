unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	lcm;
	
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		lcm = a;
	else
		lcm = b;
	while (1)
	{
		if (lcm % a == 0 && lcm % b == 0)
			return (lcm);
		lcm++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		printf("lcm: %u\n", lcm((unsigned int)atoi(argv[1]) ,(unsigned int)atoi(argv[2])));
// 	return (0);
// }

