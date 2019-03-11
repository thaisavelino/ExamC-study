/*******************************************************************************
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
********************************************************************************/


#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	len;
	int	*snum;

	len = 0;
	len = (start > end) ? start - end : end - start;

	if(!(snum = (int*)malloc(sizeof(snum) * len)))
		return (NULL);
	while (len >= 0)
	{
		snum[len] = end;
		(end > start) ? end-- : end++;
		len--;
	}
	return (&snum[0]);
}


/************** teste **********************

void	print_array(int *num, int len)
{
	int i;
	i = 0;
	while (i <= len)
	{
		printf("%d ", num[i]);
		i++;
	}
}

int		main(void)
{
	printf("\n1, 3 %p \n", ft_range(1, 3));
	printf("\n-1, 2 %p  \n", ft_range(-1, 2));
	printf("\n 0, 0 %p \n", ft_range(0, 0));
	printf("\n 0, -3 %p \n", ft_range(0, -3));
	return (0);
}
************************************************/
