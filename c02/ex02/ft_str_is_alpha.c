/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:13:20 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/13 10:32:35 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	resultado;

	resultado = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 122 || (*str > 90 && *str < 97))
		{
			resultado = 0;
		}
		str++;
	}
	return (resultado);
}
