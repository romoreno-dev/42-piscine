/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:34:23 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/21 20:55:53 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		factorial = 0;
	else if (nb == 0 || nb == 1)
		factorial = 1;
	else
		factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}
