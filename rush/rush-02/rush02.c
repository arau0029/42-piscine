void	process(int int_no, char *char_no)
{
	int	index;
	int	length;
	int	pre;
	int	j;

	index = 0;
	length = 0;
	pre = 0;
	j = 0;
	while (str[index])
	{
		length++;
	}

	if (length % 3 == 0)
	{

	}

	if (length % 3 == 1 || length % 3 == 2)
	{
		while (j < (length / 3))
		{
			pre	= int_no / 1000;
			j++;
		}
		// write pre
		// write 1000^(length / 3)
		j = 0;
		while (j < (length % 3))
		{
			index++;
		}
		//

	}
}