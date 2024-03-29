/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:04:11 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/20 11:37:56 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	contador;

	contador = 0;
	if (size != 0)
	{
		while (src[contador] != '\0' && contador < (size - 1))
		{
			dest[contador] = src[contador];
			contador++;
		}
		dest[contador] = '\0';
	}
	return (ft_strlen(src));
}
