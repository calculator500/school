/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tletswal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 08:41:45 by tletswal          #+#    #+#             */
/*   Updated: 2020/01/28 14:45:16 by tletswal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_blank(char c)
{
	if (c == ' ' | c == '\t')
		return(1);
	return(0);
}

int		main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while(*argv[1])
			argv[1]++;
		argv[1]--;
		while(is_blank(*argv[1]))
			argv[1]--;
		while(*argv[1] && !is_blank(*argv[1]))
			argv[1]--;
		argv[1]++;
		while (*argv[1] && !is_blank(*argv[1]))
			{
				write(1, argv[1]++, 1);
			}
	}
	write(1, "\n", 1);
	return(0);
}
