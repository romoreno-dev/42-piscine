/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:35:53 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/21 16:48:07 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*matrix;
	int	i;
	int	generator;

	size = max - min;
	generator = min;
	i = 0;
	if (size <= 0)
		return (NULL);
	matrix = (int *) malloc(sizeof(int) * size);
	while (i < size)
	{
		matrix[i] = generator;
		i++;
		generator++;
	}
	return (matrix);
}
