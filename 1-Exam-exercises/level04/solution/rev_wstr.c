/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 15:34:08 by tavelino          #+#    #+#             */
/*   Updated: 2019/06/14 16:48:29 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str) {
	int len;

	len = 0;
	while (str[len]) {
		len++;
	}

	printf("%d", len);
	return (len);
}

int		is_space(char c) {
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (-1);
}

void 	rev_wstr(char *str) {
	int	end;
	int	beg;
	int word;

	end = ft_strlen(str) - 1;
	beg = end;
	word = 0;
	while (beg >= 0)
	{
		end = beg;
		word = 0;
 
		//find beg of current word
		while (beg >= 0 && !is_space(str[beg]))
			beg--;
		beg++; //one up to be at first letter
		word = beg;
		while (word < end) {
			write(1, &str[word], 1);
			word++;
		}
		//print white space if we still have words to come
		if (beg > 0)
			write(1, " ", 1);
		beg--;
		beg--;
	}
}

int		main(int ac, char **av) {
	if (ac == 2) {
		rev_wstr(av[1]);	
	}
	else
		write (1, "\n", 1);
	return (0);
}
