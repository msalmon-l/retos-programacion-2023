#include <unistd.h>

int	main() 
{
	int	i = 1;
	char 	c = ' ';
	while (i < 100)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				write(1, "fizz", 5);
			if (i % 5 == 0)
				write(1, "buzz", 5);
		}
		else
		{
			if (c == 100)
				write(1, "100", 3);
			else if (c > 9)
			{
				c = (i / 10) + '0';
				write(1, &c, 1);
				c = (i % 10) + '0';
				write(1, &c, 1);
			}
			else 
			{
				c = i + '0';
				write(1, &c, 1);
			}
		}

		write(1, "\n", 1);
		i++;
	}
	return (0);
}
