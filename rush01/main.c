/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:17:42 by romoreno          #+#    #+#             */
/*   Updated: 2022/07/17 15:28:39 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned char	*get_args(char *arg)
{
	unsigned char	i;
	unsigned char	j;
	unsigned char	*nums;

	nums = (unsigned char *)malloc(4);
	i = 0;
	j = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] >= '1' && arg[i] <= '4')
		{
			nums[j] = arg[i] - '0';
			j++;
		}
		i++;
	}
	return (nums);
}

int	main(int argc, char *argv[])
{
	unsigned char	*nums;
	unsigned char	i;

	argc = 0;
	nums = get_args(argv[1]);
	i = 0;
	while (i < 16 && nums[i] != 0)
	{
		ft_putchar(nums[i] + 48);
		i++;
	}
}
