/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printing_tools.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:30:40 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/26 16:06:03 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char a);
void	ft_putstr(char str[]);
void	ft_print_value(char *filearray, char **numbers, int size, char *line);
char	*ft_find_line(char *filearray, char *number);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char str[])
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_value(char *filearray, char **numbers, int size, char *line)
{
	int	i;

	i = 0;
	while (i < size)
	{	
		line = ft_find_line(filearray, numbers[i]);
		while ((*line >= '0' && *line <= '9') || *line == ' ' || *line == ':')
				line++;
		while (*line != '\0' && *line != '\n' && *line != ' ')
		{
			ft_putchar(*line);
			line++;
		}
		i++;
		if (i != size)
			ft_putchar(' ');
		else
			ft_putchar('\n');
			i++;
	}
	free(filearray);
	// free(numbers);
}
