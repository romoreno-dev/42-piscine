/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:05:27 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/11 19:12:37 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	position;
	int	change;

	position = 0;
	while (position < (size / 2))
	{
		change = tab[position];
		tab[position] = tab[size - 1 - position];
		tab[size - 1 - position] = change;
		position++;
	}
}
