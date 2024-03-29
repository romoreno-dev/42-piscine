/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:24:58 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/17 23:02:00 by romoreno         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_source;
	unsigned int	length_dest;
	unsigned int	i;
	unsigned int	j;

	length_source = ft_strlen(src);
	length_dest = ft_strlen(dest);
	i = 0;
	j = length_dest;
	if (size == 0 || size <= length_dest)
		return (length_source + size);
	while (src[i] != '\0' && i < size - length_dest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (length_dest + length_source);
}
