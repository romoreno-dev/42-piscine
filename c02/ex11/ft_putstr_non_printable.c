/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:59:21 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/19 20:08:41 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_character(int number)
{
	int	cociente;
	int	resto;

	cociente = number / 16;
	resto = number % 16;
	if (cociente > 16)
	{
		print_character(cociente);
	}
	ft_putchar("0123456789abcdef"[cociente]);
	ft_putchar("0123456789abcdef"[resto]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			print_character((unsigned char)str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
