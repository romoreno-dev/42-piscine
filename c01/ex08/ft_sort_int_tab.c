/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:09:21 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/17 21:39:05 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos;
	int	aux;

	while (size >= 0)
	{
		pos = 0;
		while (pos < size - 1)
		{
			if (tab[pos] > tab[pos + 1])
			{
				aux = tab[pos];
				tab[pos] = tab[pos + 1];
				tab[pos + 1] = aux;
			}
			pos++;
		}
		size--;
	}
}
