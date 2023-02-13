/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:12:34 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 16:46:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	first_line(int x, char c[]);
void	mid_line(int x, char c[]);
void	last_line(int x, char c[]);
void	draw(int x, int y, char c[]);

void	rush(int x, int y)
{
	char	c[9];

	c[0] = '/';
	c[1] = '*';
	c[2] = '\\';
	c[3] = '*';
	c[4] = ' ';
	c[5] = '*';
	c[6] = '\\';
	c[7] = '*';
	c[8] = '/';
	draw(x, y, c);
}

void	draw(int x, int y, char c[])
{
	if ((x >= 1) && (y == 1))
	{
		first_line(x, c);
	}
	else if ((x >= 1) && (y == 2))
	{
		first_line(x, c);
		last_line(x, c);
	}
	else if ((x >= 1) && (y > 2))
	{
		first_line(x, c);
		while (y > 2)
		{
			mid_line(x, c);
			y--;
		}
		last_line(x, c);
	}
	else
	{
		write(1, "Insira um numnero maior que 0", 29);
		ft_putchar('\n');
	}
}

void	first_line(int x, char c[])
{
	ft_putchar (c[0]);
	while (x > 2)
	{
		ft_putchar (c[1]);
		x--;
	}
	if (x > 1)
	{
		ft_putchar (c[2]);
	}
	ft_putchar ('\n');
}

void	mid_line(int x, char c[])
{
	ft_putchar (c[3]);
	while (x > 2)
	{
		ft_putchar (c[4]);
		x--;
	}
	if (x > 1)
	{
		ft_putchar (c[5]);
	}
	ft_putchar ('\n');
}

void	last_line(int x, char c[])
{
	ft_putchar (c[6]);
	while (x > 2)
	{
		ft_putchar (c[7]);
		x--;
	}
	if (x > 1)
	{
		ft_putchar (c[8]);
	}
	ft_putchar ('\n');
}
