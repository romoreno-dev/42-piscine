/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:22:05 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/17 19:22:07 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*aux;
	unsigned int	contador;

	aux = dest;
	contador = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && contador < nb)
	{
		*dest = *src;
		src++;
		dest++;
		contador++;
	}
		*dest = '\0';
	return (aux);
}
