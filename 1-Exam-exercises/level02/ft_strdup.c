/* **************************************************************************
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);

************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char    *ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	if (!(new = (char*)malloc(sizeof(*new) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int		main(void)
{
	char *str;

	str = "hello thais";
	printf("str pointer: %p\nstr printed: %s\nsize: %d\n", str, str, ft_strlen(str));
	char *p;
	p = ft_strdup(str);
	printf ("\nresult pointer: %p\nresult printed: %s\nsize: %d\n", p, p, ft_strlen(p));
	return (0);
}
