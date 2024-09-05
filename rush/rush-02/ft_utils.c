int	ft_atoi(char *str)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		value *= 10;
		value += *str - '0';
		str++;
	}
	return (value * sign);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("int = %i", ft_atoi(argv[1]));
	}
}