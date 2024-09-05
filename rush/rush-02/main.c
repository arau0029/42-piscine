#include "ft.h"
#include <unistd.h>

int	main(int argc, char	*argv[])
{
	if (argc == 2)
	{
		if (ft_atoi(argv[1]) < 0)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		else
		{
			
		}

	}
	if (argc == 3)
	{
		if (ft_atoi(argv[2]) < 0)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		
	}
	return (0);
}
