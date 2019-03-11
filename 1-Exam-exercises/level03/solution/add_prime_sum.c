/******************************************************************************
#Assignment name  : add_prime_sum
#Expected files   : add_prime_sum.c
#Allowed functions: write, exit
#--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
********************************************************************************/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int	num)
{
	char c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	ft_putchar(c);
}

int		ft_atoi(const char *c)
{
	long resp;
	int	sign;

	sign = 1;
	resp = 0;
	while (*c == 32 || (*c >= 9 && *c<= 13))
		c++;
	if (*c == '-')
		sign = -1;
	if (*c == '+'|| *c == '-')
		c++;
	while (*c >= '0' && *c <= '9')
	{
		resp = resp * 10 + *c - '0';
		c++;
	}
	return (sign * (int)resp);
}

int		is_prime(int num)
{
	int i;

	i = 2;
	if (num <= 1)
		return (0);
	if (num == 2 || num == 3)
		return (1);
	while (i * i <= num)
	{
		if (num % i != 0)
			i++;
		else
		{
			return (0);
			break ;
		}
	}
	return (1);
}

void	add_prime_sum(int num)
{
	int i;
	int sum;

	i = 2;
	sum = 0;
	while (i <= num)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "0", 1);
	else
		add_prime_sum(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
