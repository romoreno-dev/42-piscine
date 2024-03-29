/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finding_tools.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:04:01 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/26 15:12:10 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_find_line(char *filearray, char *number);
int		ft_check_format_line_dictionary(char *line);
void	ft_find_value(char *filearray, char **numbers, int size);
void	ft_print_value(char *filearray, char **numbers, int size, char *line);
void	ft_putstr(char str[]);
void	ft_putchar(char a);

char	*ft_find_line(char *filearray, char *number)
{
	int	i;
	int	j;
	int	new_line;

	i = 0;
	new_line = 0;
	while (filearray[i] != '\0')
	{
		j = 0;
		if (filearray[i] == '\n')
			new_line = i + 1;
		while (filearray[i + j] == number[j])
		{
			if (number[j + 1] == '\0' && !(filearray[i + j + 1] >= '0'
					&& filearray[i + j + 1] <= '9'))
			{
				if (ft_check_format_line_dictionary(&filearray[new_line]) == 0)
					return (&filearray[new_line]);
				return (NULL);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int	ft_check_format_line_dictionary(char *line)
{
	int	i;
	int	error;

	i = 0;
	error = 0;
	while (line[i] != ':')
	{
		if ((line[i] < '0' || line[i] > '9') && line[i] != ' ')
		{
			error = 1;
			return (error);
		}
		i++;
	}
		i++;
	while (line[i] != '\n')
	{
		if (line[i] != 32)
			return (error);
		i++;
	}
	return (error);
}

void	ft_find_value(char *filearray, char **numbers, int size)
{
	char	*line;
	int		i;
	int		error;

	i = 0;
	error = 0;
	while (i < size && error == 0)
	{
		line = ft_find_line(filearray, numbers[i]);
		if (!line)
		{
			error = 1;
			ft_putstr("Dict Error\n");
			break ;
		}
			i++;
	}
	if (error == 0)
	{
		printf("%d", size);
		ft_print_value(filearray, numbers, size, line);
	}
}
