/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetavare <felipe@kelviglab.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:22:32 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 02:32:36 by fetavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	draw(int x, int y, char c[]);
void	rush00(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	main(void)
{
	rush(1, 5);
	return (0);
}
// To print the other RUSH, use the functions below
// rush00(8,5);
// rush02(8,5);
// rush03(8,5);
// rush04(8,5);

void	rush00(int x, int y)
{
	char	c[9];

	c[0] = 'o';
	c[1] = '-';
	c[2] = 'o';
	c[3] = '|';
	c[4] = ' ';
	c[5] = '|';
	c[6] = 'o';
	c[7] = '-';
	c[8] = 'o';
	draw(x, y, c);
}

void	rush02(int x, int y)
{
	char	c[9];

	c[0] = 'A';
	c[1] = 'B';
	c[2] = 'A';
	c[3] = 'B';
	c[4] = ' ';
	c[5] = 'B';
	c[6] = 'C';
	c[7] = 'B';
	c[8] = 'C';
	draw(x, y, c);
}

void	rush03(int x, int y)
{
	char	c[9];

	c[0] = 'A';
	c[1] = 'B';
	c[2] = 'C';
	c[3] = 'B';
	c[4] = ' ';
	c[5] = 'B';
	c[6] = 'A';
	c[7] = 'B';
	c[8] = 'C';
	draw(x, y, c);
}

void	rush04(int x, int y)
{
	char	c[9];

	c[0] = 'A';
	c[1] = 'B';
	c[2] = 'C';
	c[3] = 'B';
	c[4] = ' ';
	c[5] = 'B';
	c[6] = 'C';
	c[7] = 'B';
	c[8] = 'A';
	draw(x, y, c);
}
