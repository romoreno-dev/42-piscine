/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:58:15 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/21 21:38:17 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_build_initial_number(char *cad, int n)
{
	char	b;

	b = '0' + (n - 1);
	while (n > 0)
	{
		cad[n - 1] = b;
		n--;
		b--;
	}
}

int	ft_check_number(char *cad, int n)
{
	int	cont;
	int	i;

	cont = 1;
	i = 0;
	while (i < (n - 1))
	{
		if (cad[i] >= cad[i + 1])
		{
			cont = 0;
			return (cont);
		}
		i++;
	}
	return (cont);
}

void	ft_draw(char *cad, int n)
{
	int	digit;

	digit = 0;
	while (digit < n)
	{
		write(1, &cad[digit], 1);
		digit++;
	}
}

void	ft_number_increment(char *cad, int n)
{
	while (n > 0)
	{
		if (cad[n - 1] == '9')
		{
			cad[n - 1] = '0';
			if (cad[n - 2] != '9')
			{
				cad[n - 2]++;
				n = -1;
			}
			else
				n--;
		}
		else
		{
			cad[n - 1]++;
			n = -1;
		}
	}
}

int	ft_check_last_number(char *cad, int n)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (cad[0] == (10 - n + 48))
	{
		while (i < (n - 1))
		{
			if ((cad[i + 1] - cad[i]) ==1)
			{
				i++;
			}
		}
		if (i == (n - 1))
		{
			count = 1;
			write(1, " ", 2);
		}
	}
	return (count);
}

void ft_print_comb(int n)
{
	char	cadena[10];

	if (n > 0 && n < 10)
	{
		ft_build_initial_number(cadena, n);
		while (cadena[0] < (10 - (n - 1) + 48))
		{
			if (ft_check_number(cadena, n) == 1)
			{
				ft_draw(cadena, n);
				if (ft_check_last_number(cadena, n) == 0)
					write(1, ", ", 2);
			}
			ft_number_increment(cadena, n);
			if (n == 1)
			{
				if (cadena[0] == '9')
				{
					ft_draw(cadena, n);
					break ;
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb(3);
	// printf("\nPRUEBA CON EL -1 \n");
	// ft_print_comb(-1);
	// printf("\nPRUEBA CON EL 0 \n");
	// ft_print_comb(0);
	// printf("\nPRUEBA CON EL 1 \n");
	// ft_print_comb(1);
	// printf("\nPRUEBA CON EL 2 \n");
	// ft_print_comb(2);
	// printf("\nPRUEBA CON EL 3 \n");
	// ft_print_comb(3);
	// printf("\nPRUEBA CON EL 4 \n");
	// ft_print_comb(4);
	// printf("\nPRUEBA CON EL 5 \n");
	// ft_print_comb(5);
	// printf("\nPRUEBA CON EL 6 \n");
	// ft_print_comb(6);
	// printf("\nPRUEBA CON EL 7 \n");
	// ft_print_comb(7);
	// printf("\nPRUEBA CON EL 8 \n");
	// ft_print_comb(8);
	// printf("\nPRUEBA CON EL 9 \n");
	// ft_print_comb(9);
	// printf("\nPRUEBA CON EL 10 \n");
	// ft_print_comb(10);
}
