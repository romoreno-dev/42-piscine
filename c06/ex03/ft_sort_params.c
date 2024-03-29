/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:37:18 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/20 00:41:56 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diferencia;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diferencia = s1[i] - s2[i];
			return (diferencia);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(int argc, char **argv)
{
	int	pass_remaining;
	int	position;

	if (argc > 0)
	{
		pass_remaining = argc - 1;
		while (pass_remaining >= 0)
		{
			position = 1;
			while (position < pass_remaining)
			{
				if (ft_strcmp(argv[position], argv[position + 1]) > 0)
					ft_swap(&argv[position], &argv[position + 1]);
			position++;
			}
			pass_remaining--;
		}
		position = 0;
		while (++position < argc)
		{
			ft_putstr(argv[position]);
			ft_putchar('\n');
		}
		return (0);
	}
}
