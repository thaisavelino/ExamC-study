#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

int		main(void)
{
	char *str;

	str = "hello thais";
	write (1, "\n*********** testes ***********\n", 32);
	ft_putchar('o');
	ft_putchar('k');
	ft_putchar('\n');
	ft_putnbr(305);
	ft_putchar('\n');
	ft_putstr("min int: ");
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putstr("negative: ");
	ft_putnbr(-1085);
	ft_putchar('\n');
	ft_putstr("max int: ");
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putstr(str);
	ft_putstr(NULL);
	ft_putstr("\natoi\n");
	ft_putnbr(ft_atoi("    		-42     	asdf "));
	printf("\n printf:%d", ft_atoi("		  	 	 	-2147483648"));

	return (0);
}
