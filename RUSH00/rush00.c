#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_middle_part(int x, int j)
{
	if (j == 0)
	{
		ft_putchar('B');
	}
	else if (j == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_print_first_or_last_line(int x, int j)
{
	if (j == 0)
	{
		ft_putchar('A');
	}
	else if (j == x - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush03(int x, int y)
{
	int i = 0;
	int j = 0;

	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				if (i == 0 || i == y - 1 )
				{
					ft_print_first_or_last_line(x, j);
					j++;
				}
				else
				{
					ft_print_middle_part(x, j);
					j++;
				}
			}
			ft_putchar('\n');
			i++;
		}
	}
}

int		main(void)
{
	rush03(-2,-2);
	return (0);
}
