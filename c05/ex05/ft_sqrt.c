/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:27:19 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/21 21:30:08 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	number;

	i = 1;
	number = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (number < nb && (i * i) > 0)
		{
			i++;
			number = i * i;
			printf("%d , ", number);
		}
		if (number != nb)
			return (0);
		return (i);
	}
}
