/*******************************************************************************
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
******************************************************************************/

#include <unistd.h>
#include <stdio.h>


///////////////////////////////////
// check if repeat in both strings

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		findchar(char c, char *str, int index)
{
	int	i;
	int	find;

	i = 0;
	find = 0;
	while (str[i] && i <= index)
	{
		if (str[i] == c)
			find++;
		i++;
	}
	printf("%d", find);
	return (find);
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	while (s1[i])
	{
		c = s1[i];
		while (s2[j])
		{
			if ((c == s2[j]) && findchar(c, s2, j) <= 1 && findchar(c, s1, i) <= 1)
				ft_putchar(c);
			j++;
		}
		i++;
		j = 0;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
