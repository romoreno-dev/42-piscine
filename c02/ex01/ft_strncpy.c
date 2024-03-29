/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:49:54 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/14 12:55:47 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	contador;
	char			*res;

	contador = 0;
	res = dest;
	while (*src != '\0' && contador < n)
	{
		*dest = *src;
		src++;
		dest++;
		contador++;
	}
	while (contador < n)
	{
		*dest = '\0';
		dest++;
		contador++;
	}
	return (res);
}
