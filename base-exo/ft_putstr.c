#include <unistd.h>

int		ft_strlen(char *str);

void	ft_putstr(char *str)
{
	// must check if pointer exist and if there are something to avoid segfault
	if (str && *str)
		write (1, str, ft_strlen(str));
}
