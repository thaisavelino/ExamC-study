#include <unistd.h>

// testar os negativos e proteger o minimo integer

void	ft_putnbr(int	n)
{
	char c;

	c = '0';
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write (1, "-2", 2);
			n = 147483648;
		}
	    else
		{
			write (1, "-", 1);
			n = -n;
		}
	}
	// 2 digitos tem de separar
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}
