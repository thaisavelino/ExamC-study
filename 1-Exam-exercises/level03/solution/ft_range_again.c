#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int	len;
	int *snum;

	len = (start > end) ? start - end : end - start;
	printf("len %d, start %d, end %d", len, start, end);
	if (!(snum = (int*)malloc(sizeof(snum) * len)))
		return (NULL);
	while (len >= 0)
	{
		snum[len] = end;
		printf("\n pf len %d, end %d, start %d \n, snum[len] %d", len, end, start, snum[len]);
		(end >= start) ? end-- : end++;
		len--;
	}
	return (&snum[0]);
}

int		main(void)
{
	ft_range(5, 5);
	return (0);
}
