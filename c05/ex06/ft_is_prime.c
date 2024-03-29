/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:02:48 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/21 18:34:30 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	else
	{
		while (count < (nb / 2))
		{
			if (nb % count == 0 && nb != count)
				return (0);
			count++;
		}
		return (1);
	}
}
