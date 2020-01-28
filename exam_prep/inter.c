/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tletswal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:59:18 by tletswal          #+#    #+#             */
/*   Updated: 2020/01/28 16:05:29 by tletswal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int		ft_within_arr(char nb, char tab[], int len)
{
	int		i;

	i = 0;
	while (tab[i] != nb && i < len)
		i++;
	if (i == len)
		return (0);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int	n = 0;
	int j = 0;
	int	l = ft_strlen(argv[1]);
	char	temp[ft_strlen(argv[1])];

	while (argv[1][i])
	{
		j = 0;
		if (ft_within_arr(argv[1][i], temp, l) == 0)
		{
			while (argv[2][j] && argv[2][j] != argv[1][i])
				j++;
			if (j < ft_strlen(argv[2]))
			{
				write(1, &argv[1][i], 1);
				temp[n] = argv[1][i];
				n++;
			}
		}
		i++;
	}
	write(1, "\n", 1);
	return(0);
}
	
