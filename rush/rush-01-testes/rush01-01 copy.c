int	col;
int	row;
int number;
int	position;
int	completed[16];

// x = div + mod;
completed = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
if (x < 4)
{
	col = x;
	print_crescent(row);
}
else if (3 < x < 8)
{
	col = x - 4;
	print_crescent(row);
}
else if (7 < x < 12)
{
	row = x - 8;
	if (argv[1][x] == 1)
	{
		print_number(row, position, number);
	}
	if (argv[1][x] == 4)
	{
		print_crescent(row, number);
	}
}
else if (11 < x < 16)
{
	row = (x - 4) - 8;
	if (argv[1][x] == 4)
	{
		print_decrescent(row, number);
	}
}

void	print_crescent(int row, int number)
{
	number = 1;
	position = 4 * row;
	while (number <= 4)
	{
		completed[position] = number;
		number++;
		position++;
	}
}

void	print_decrescent(int row, int number)
{
	number = 4;
	position = 4 * row;
	while (number >= 1)
	{
		completed[position] = number;
		number--;
		position++;
	}
}

void	print_number(int row, int position, int number)
{
	position = 4 * row;
	completed[position] = number;
}