/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tletswal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 07:45:56 by tletswal          #+#    #+#             */
/*   Updated: 2020/01/28 11:40:02 by tletswal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char**argv)
{
	const char tab[ ] = "zyxwvutsrqponmlkjihgfedcba";
	char	*str = argv[1];
	int i = 0;

	if (argc == 2)
	{
		while (str[i])
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = tab[str[i] - 'a'];
			if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] = tab[str[i] - 'A'] - 32;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
