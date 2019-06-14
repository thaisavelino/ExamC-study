/* ************************************************************************** **
 * Assignment name  : ft_strrev
 * Expected files   : ft_strrev.c
 * Allowed functions:
 * -----------------------------------------------------------------------------
 *
 *  Write a function that reverses (in-place) a string.
 *
 *  It must return its parameter.
 *
 *  Your function must be declared as follows:
 *
 *  char    *ft_strrev(char *str);
 * ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	swap;
	int		last;
	int		i;

	last = 0;
	while (str[last] != '\0')
		last++;
	last = last - 1;
	i = 0;
	while (i < ((last + 1) / 2))
	{
		swap = str[i];
		str[i] = str[last - i];
		str[last - i] = swap;
		i++;
	}
	return (str);
}
