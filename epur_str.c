/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:44:34 by tavelino          #+#    #+#             */
/*   Updated: 2018/05/29 00:11:00 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		is_char(char c)
{
	if (c >= 33 && c <= 126)
	  return (1);
	else
		return (0);	
}

int		is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int	i;
	char *str;

	i = 0;
	if (argc == 2 && argv[1] != 0)
	{
		if(!(str = (char *)malloc(sizeof(str) * strlen(argv[1]))))
			return (0);
		while (argv[i])
		{
			if(is_char(argv[i] == 1)
			{
				word = 1;
				i++;
			}
			if(is_space(argv[i] == 1)
			{
				if (word = 1)
					*str = " ";
				word = 0;
				i++;
			}
		}
		*str = '\n';
	}
	else
		write (1, "\n", 1);
	return (0);
}
