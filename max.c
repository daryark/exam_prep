int	max(int *tab, unsigned int len)
{
	int	max;
	
	max = *tab;
	while (--len)
	{
		if (*tab > max)
			max = *tab;
		tab++;
	}
	return (max);
}

/*#include <stdio.h>
int	main (void)
{
	int	tab[] = {1, 3, -1, 0, 200, 4000, 30, 5, 50};
	printf ("max: %d\n", max(tab, 9));
	return (0);
}*/
