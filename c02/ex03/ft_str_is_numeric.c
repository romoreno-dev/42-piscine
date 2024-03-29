/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:41:52 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/13 10:31:43 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	resultado;

	resultado = 1;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
		{
			resultado = 0;
		}
		str++;
	}
	return (resultado);
}
