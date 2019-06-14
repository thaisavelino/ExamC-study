/* ************************************************************************** **
* Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*******************************************************************************
	ANSWER:

	we take the char and do: c = a - c + z
	using ascii table ref.
*******************************************************************************/

#include <unistd.h>

void	alfa_mirror(char *str) {
	while (*str) {
		if (*str >= 'A' && *str <= 'Z') {
			*str = 65 - *str + 90;
		}
		if (*str >= 'a' && *str <= 'z') {
			*str = 97 - *str + 122; 
		}
		write (1, str, 1);
		str++;
	}	
}

int		main(int argc, char **argv) {
	if (argc == 2)
		alfa_mirror(argv[1]);
	write (1, "\n", 1);
	return (0);
}
