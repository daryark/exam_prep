#include <stdlib.h>

int	ft_nbrlen (int	n)
{
	int	len;
	
	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa (int	nbr)
{
	char	*buf;
	int	len;
	int	sign;

	len = ft_nbrlen (nbr);
	buf = malloc(sizeof(char) * len + 1);
	if (!buf)
		return (NULL);
	sign = 1;
	if (nbr < 0)
	{
		sign = -1;
		nbr *= -1;
	}
	while (len--)
	{
		if (sign == -1 && len == 0)
		{
			buf[len] = '-';
			return (buf);
		}
		buf[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (buf);
}

/*#include <stdio.h>

int	main(void)
{
	printf("res: %s\n", ft_itoa(0));
	return (0);
}*/
