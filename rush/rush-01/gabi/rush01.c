#include <stdio.h>

void	check_ones_n_fours(char viewpoints[], char result[4][4]);
void	col_check_ones_n_fours(int x, char viewpoints[], char result[4][4]);
void	row_check_ones_n_fours(int x, char viewpoints[], char result[4][4]);
void	print_results(char result[4][4]);
void	remove_spaces(char arr[], char new_arr[]);

int	main(int argc, char *argv[])
{
	char	viewpoints[16];
	char	result[4][4] = {
		{'0', '0', '0', '0'}, 
		{'0', '0', '0', '0'}, 
		{'0', '0', '0', '0'}, 
		{'0', '0', '0', '0'}
		};
	// error(argv[1]); - COMMENTED OUT TO TEST
	remove_spaces(argv[1], viewpoints);
	check_ones_n_fours(viewpoints, result);
	print_results(result);
}

void	remove_spaces(char arr[], char new_arr[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arr[i])
	{
		if (i % 2 == 0)
		{
			new_arr[j] = arr[i];
			j++;
		}
		i++;
	}
}

void	col_check_ones_n_fours(int x, char viewpoints[], char result[4][4])
{
	int	y;

	if (viewpoints[x] == '1' && (viewpoints[x + 4] == '2' || viewpoints[x + 4] == '3'))
	{
		//PRINT 4 AS FIRST CHAR
		result[0][x - 1] = '4';
	}
	if (viewpoints[x] == '1' && viewpoints[x + 4] == '4')
	{
		//PRINT 4, 3, 2, 1 LINE
		y = 0;
		while (y < 4)
		{
			result[y][x - 1] = '4' - y;
			y++;
		}
	}
	if ((viewpoints[x] == '2' || viewpoints[x] == '3') && viewpoints[x + 4] == '1')
	{
		//PRINT 4 AT LAST CHAR
		result[3][x - 1] = '4';
	}
	if (viewpoints[x] == '4' && viewpoints[x + 4] == '1')
	{
		//PRINT 1, 2, 3, 4 LINE
		//result[0, 1, 2, 3][x - 1] = '1', '2', '3', '4';
		y = 0;
		while (y < 4)
		{
			result[y][x - 1] = '1' + y;
			y++;
		}
	}
}

void	row_check_ones_n_fours(int x, char viewpoints[], char result[4][4])
{
	int	y;

	if (viewpoints[x] == '1' && (viewpoints[x + 4] == '2' || viewpoints[x + 4] == '3'))
	{
		//PRINT 4 AS FIRST CHAR
		result[x - 9][0] = '4';
	}
	if (viewpoints[x] == '1' && viewpoints[x + 4] == '4')
	{
		//PRINT 4, 3, 2, 1 LINE
		y = 0;
		while (y < 4)
		{
			result[x - 9][y] = '4' - y;
			y++;
		}
	}
	if ((viewpoints[x] == '2' || viewpoints[x] == '3') && viewpoints[x + 4] == '1')
	{
		//PRINT 4 AT LAST CHAR
		result[x - 9][3] = '4';
	}
	if (viewpoints[x] == '4' && viewpoints[x + 4] == '1')
	{
		//PRINT 1, 2, 3, 4 LINE
		y = 0;
		while (y < 4)
		{
			result[x - 9][y] = '1' + y;
			y++;
		}
	}
}

void	check_ones_n_fours(char viewpoints[], char result[4][4])
{
	int	x;

	x = 1;
	while (x < 13)
	{
		// FOR COLUMNS
		if (x < 5)
		{
			col_check_ones_n_fours(x, viewpoints, result);
			x++;
		}
		// FOR ROWS
		if (x > 8)
		{
			row_check_ones_n_fours(x, viewpoints, result);
			x++;
		}
	}
}

void	print_results(char result[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while(j < 4)
		{
			printf("%c", result[i][j]);
			j++;
		}
		i++;
	}
}