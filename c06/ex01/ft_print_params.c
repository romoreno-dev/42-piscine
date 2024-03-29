/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:12:49 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/18 20:24:38 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	parameter;
	int	i;

	parameter = 1;
	if (argc > 0)
	{
		while (parameter < argc)
		{
			i = 0;
			while (argv[parameter][i] != '\0')
			{
				ft_putchar(argv[parameter][i]);
				i++;
			}
			ft_putchar(10);
			parameter++;
		}
	}
}
