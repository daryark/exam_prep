#include <stdlib.h>
#include <limits.h>

int	*ft_rrange(int start, int end)
{
	int	*buf;
	int	i;

	i = 0;
	buf = malloc(sizeof(int) * (end - start + 1) + 1);
	if (!buf)
		return (NULL);
	if (end > start)
	{
		while (end >= start)
		{
			buf[i] = end;
			i++;
			if (end == INT_MIN)
				break ;
			end--;
		}
	}
	else
	{
		while (end <= start)
		{
			buf[i] = end;
			i++;
			if (end == INT_MAX)
				break ;
			end++;
		}
	}
	buf[i] = '\0';
	return (buf);
}

/*#include <stdio.h>

int	main(void)
{
	int	start;
	int	end;
	
	start = INT_MIN;
	end = INT_MIN + 2;
	int *buf = ft_rrange(start, end);
	while (end >= start)
	{
		printf("%d, ", *buf);
		buf++;
		if (end == INT_MIN)
			return (0);
		end--;
	}
	printf("\n"); 
	//printf("_%d\n", *++buf);
	return (0);
}*/


