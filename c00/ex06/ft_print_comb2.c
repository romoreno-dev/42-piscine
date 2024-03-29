/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:14:53 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/08 12:08:38 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_character(int numero)
{
	char	primera_cifra;
	char	segunda_cifra;

	primera_cifra = (numero / 10) + 48;
	segunda_cifra = (numero % 10) + 48;
	ft_putchar(primera_cifra);
	ft_putchar(segunda_cifra);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_character(a);
			write(1, " ", 1);
			print_character(b);
			if ((a != 98 || b != 99))
			{
				write(1, ", ", 2);
			}
		b++;
		}
	a++;
	}
}
