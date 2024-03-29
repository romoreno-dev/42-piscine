/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:59:19 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/09 15:59:55 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_upper_extreme(int x)
{
	int	column;

	ft_putchar('A');
	if (x == 1)
	{
		ft_putchar('\n');
	}
	column = 1;
	while (column < x)
	{
		if (column != x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		column++;
	}
}

void	ft_lower_extreme(int x)
{
	int	column;

	ft_putchar('C');
	if (x == 1)
	{
		ft_putchar('\n');
	}
	column = 1;
	while (column < x)
	{
		if (column != x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		column++;
	}
}

void	ft_body(int x)
{
	int	column;

	column = 1;
	ft_putchar('B');
	if (x == 1)
	{
		ft_putchar('\n');
	}
	while (column < x)
	{
		if (column != x - 1)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		column++;
	}
}

void	rush(int x, int y)
{
	int	row;

	if (y > 0 && x > 0)
	{
		ft_upper_extreme(x);
		row = 1;
		while (row < y)
		{
			if (row != y - 1)
			{
				ft_body(x);
			}
			else
			{
				ft_lower_extreme(x);
			}
			row++;
		}
	}
}
