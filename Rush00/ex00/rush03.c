/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 02:23:14 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/22 20:23:27 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	loop_x(int x, int i_line);
void	define_chars(char *c_left, char *c_right, char *c_middle, int i_line);

void	rush(int x, int y)
{
	int i_y;

	if (x > 0 && y > 0)
	{
		i_y = 1;
		while (i_y <= y)
		{
			if (i_y == 1)
				loop_x(x, 1);
			else
			{
				if (i_y == y)
					loop_x(x, 3);
				else
					loop_x(x, 2);
			}
			i_y = i_y + 1;
		}
	}
}

void	loop_x(int x, int i_line)
{
	char	c_left;
	char	c_right;
	char	c_middle;
	int		i_x;

	define_chars(&c_left, &c_right, &c_middle, i_line);
	i_x = 1;
	while (i_x <= x)
	{
		if (i_x == 1)
			ft_putchar(c_left);
		else
		{
			if (i_x == x)
				ft_putchar(c_right);
			else
				ft_putchar(c_middle);
		}
		i_x = i_x + 1;
	}
	ft_putchar('\n');
}

void	define_chars(char *c_left, char *c_right, char *c_middle, int i_line)
{
	if (i_line == 1)
	{
		*c_left = 'A';
		*c_right = 'C';
		*c_middle = 'B';
	}
	else
	{
		if (i_line == 2)
		{
			*c_left = 'B';
			*c_right = 'B';
			*c_middle = ' ';
		}
		else
		{
			*c_left = 'A';
			*c_right = 'C';
			*c_middle = 'B';
		}
	}
}
