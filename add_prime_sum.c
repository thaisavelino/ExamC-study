/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:16:29 by tavelino          #+#    #+#             */
/*   Updated: 2018/05/28 23:40:18 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/**
 ** Para testar 225286 vai ser o último número possível, 225287 estoura o 
 ** limite do Integer na soma.
 **
 **/

#include <unistd.h>

int		ft_atoi(const char *str);
void	ft_putnbr(int nb);

int		isprime(int nb)
{
	int i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int	nb;
	int	sum;

	i = 2;
	sum = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while (i <= nb)
		{
			if (isprime(i) == 1)
				sum += i;
			if (sum < 0)
				return (0);
			i++;
		}
		ft_putnbr(sum);
		write (1, "\n", 1);
	}
	return (0);
}
