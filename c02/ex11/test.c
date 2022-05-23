#include <unistd.h>

int	main()
{
	int d, q, r;
	int i, j;
	char hex[128];

	i = 0;
	j = 0;
	d = 13;
	q = '\v';
	while (q != 0)
	{
		r = q % 16;
		if (r < 10)
		{
			hex[i] = r + 48;
			i++;
		}
		else
		{
			hex[i] = r + 87;
			i++;
		}
		q = q / 16;
	}

	j = i;
	while (j >= 0)
	{
		write(1, &hex[j], 1);
		j--;
	}
	write(1, "\n", 1);
	return 0;
}
