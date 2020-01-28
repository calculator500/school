/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tletswal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 07:40:42 by tletswal          #+#    #+#             */
/*   Updated: 2020/01/28 11:00:24 by tletswal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_atoi(const char *str)
{
	int i = 0;
	int a;
	int number = 0;
	int sign = 1;

	if( str[i] == 45)
	{
		sign = -1;
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		a = str[i] - 48;;
		number = number * 10 + a;
		i++;
	}
	return(number * sign);
}
