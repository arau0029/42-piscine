int	col;
int	row;
int number;
int	completed[16];

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
	if (argv[1][x] == 4)
	{
		print_crescent();
	}
	
}
else if (11 < x < 16)
{
	row = (x - 4) - 8;
	if (argv[1][x] == 4)
	{
		print_decrescent();
	}
}

void	print_crescent()
{
	int	number;

	number = 1;
	while (position < 4)
	{
		write(1, &number, 1);
		number++;
		position++;
	}
}

void	print_decrescent()
{
	int	number;

	number = 4;
	while (position < 4)
	{
		write(1, &number, 1);
		number--;
		position++;
	}
}