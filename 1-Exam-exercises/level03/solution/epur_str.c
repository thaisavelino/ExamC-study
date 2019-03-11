/*******************************************************************************
Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Example:

$> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous voyez c'est facile d'afficher la meme chose$
$> ./epur_str " seulement          la c'est      plus dur " | cat -e
seulement la c'est plus dur$
$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./epur_str "" | cat -e
$
$>
*******************************************************************************/

#include <unistd.h>
#include <stdio.h>

int 	is_print(char c)
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
void	epur_str(char *s)
{
	int		word;

	word = 0;
	if (s && *s)
	{
		// find start
		while (is_space(*s))
			s++;
		//loop print words and check for more to put one space
		while (s && *s)
		{
			if (word == 1)
				write (1, " ", 1);
			while (is_print(*s))
			{
				word = 1;
				write (1, s++, 1);
			}
			word = 0;
			while (is_space(*s))
				s++;
			if (is_print(*s))
				word = 1;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
}
