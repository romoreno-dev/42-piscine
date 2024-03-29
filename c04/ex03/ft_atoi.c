/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:52:33 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/20 16:20:46 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_space(char *str)
{
	int	resultado;

	resultado = 0;
	if (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
	{
		resultado = 1;
	}
	return (resultado);
}

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		if (power == 0)
		{
			return (1);
		}
		else
		{
			return (nb * ft_power(nb, power - 1));
		}
	}
}

int	ft_extract(char *str, int index, int q, int minus_sign)
{
	int	j;
	int	limit;
	int	numerito;

	j = 0;
	numerito = 0;
	limit = q;
	while (j < limit && q > 0)
	{
		numerito += ((int)(str[index + j] - '0')) * ft_power(10, q - 1);
		q--;
		j++;
	}
	if (minus_sign % 2 != 0)
	{
		numerito = -numerito;
	}
	return (numerito);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	minus_sign;
	int	numbers_quantity;
	int	index;

	i = 0;
	j = 0;
	numbers_quantity = 0;
	minus_sign = 0;
	index = 0;
	while (str[i] != '\0' && ft_is_space(&str[i]) == 1)
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			minus_sign++;
		if ((str[i + 1] >= '0' && str[i + 1] <= '9'))
			index = i + 1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i++] <= '9'))
		numbers_quantity++;
	return (ft_extract(str, index, numbers_quantity, minus_sign));
}
