int ft_atoi(char *str)
{
	int i;
	int nbr = 0;
	int n = 0;
			
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			n++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr * 10 + str[i] - 48;
			if(str[i + 1] >= ' ' && str[i + 1] <= '/'
				|| str[i + 1] >= ':' && str[i + 1] <= '~')
				break ;
		}
		i++;
	}
	if( n % 2 != 0)
		nbr *= -1;
	return (nbr);
}
