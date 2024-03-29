/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:16:34 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/26 15:04:03 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	check_params_and_execute(char *root, char *number);
char	*ft_build_filearray(char *root);
void	ft_find_value(char *filearray, char **numbers, int size);
char	**ft_break_string(char *str, char **num_array);
int		ft_len_or_array(char **num_array);
void	ft_putstr(char str[]);

int	main(void)
{
	int size;
	char	*filearray;
	char	*num_array[4] = {"2", "1000", "20", "5"}; 

		size = 4;
		filearray = ft_build_filearray("numbers.dict");
		ft_find_value(filearray, num_array, size);
	}