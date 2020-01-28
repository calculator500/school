/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:11:13 by nmkhabel          #+#    #+#             */
/*   Updated: 2020/01/28 09:16:32 by nmkhabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int a;
	int number;

	i = 0;
	number = 0;
	while (*str >= 48 && *str <= 57)
	{
		a = str[i] - 48;
		number = number * 10 + a;
		i++;
	}
	return (number);
}
