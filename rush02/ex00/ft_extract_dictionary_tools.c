/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_dictionary_tools.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:42:06 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/24 20:46:40 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_length_dictionary(char *root);
char	*ft_build_filearray(char *root);

int	ft_length_dictionary(char *root)
{
	char	*buffer;
	int		file;
	int		i;

	file = open(root, O_RDONLY);
	if (file == -1)
		return (-1);
	buffer = (char *)malloc(sizeof(char));
	if (buffer == NULL)
		return (-1);
	i = 0;
	while (read(file, buffer, 1) != 0)
		i++;
	close(file);
	free(buffer);
	return (i);
}

char	*ft_build_filearray(char *root)
{
	int		file;
	char	*array;
	int		length;

	length = ft_length_dictionary(root);
	array = (char *)malloc(length + 1);
	file = open(root, O_RDONLY);
	read(file, array, length);
	array[length] = '\0';
	close(file);
	return (array);
}
