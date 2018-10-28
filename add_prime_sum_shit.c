/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 20:32:53 by tavelino          #+#    #+#             */
/*   Updated: 2018/05/28 20:41:54 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import<unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void	add_prime_sum (char *num)
{
	char print;

	print = 0;
	print = num + '0';
	ft_putchar(print);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		add_prime_sum(argv[1]);
	}
	return (0);
}
