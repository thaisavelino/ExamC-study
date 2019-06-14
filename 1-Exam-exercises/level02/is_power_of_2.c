/* ************************************************************************** **
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it 
returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);

*******************************************************************************/

#include <stdio.h>

int		is_power_of_2(unsigned int n) {
	unsigned int power;

	power = 1;
	while (power < n) { 
		power = power * 2;
	}
	if (power == n) 
		return (1);
	else
		return (0);
}

int		main(void) {
	printf ("%d\n", is_power_of_2(5));
	return (0);
}
