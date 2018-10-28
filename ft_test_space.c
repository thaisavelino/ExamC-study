#import <unistd.h>

int	main(void)
{
	char c;

	c = ' ';
	if (c == 32)
		write(1, "sim", 3);
	return (0);
}
