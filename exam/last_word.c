/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 08:41:31 by nmkhabel          #+#    #+#             */
/*   Updated: 2020/01/28 09:09:36 by nmkhabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_blank(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			argv[1]++;
		argv[1]--;
		while (is_blank(*argv[1]))
			argv[1]--;
		while (*argv[1] && !is_blank(*argv[1]))
			argv[1]--;
		argv[1]++;
		while (*argv[1] && !is_blank(*argv[1]))
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
