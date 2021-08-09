/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:13:08 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/08 15:13:13 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex05/ft_str_is_uppercase.c"

int	main(void)
{
	char	c[42];

	while(1)
	{
		scanf("%s", c);
		printf("is uppercase ? : %d\n", ft_str_is_uppercase(c));
	}
	return (0);
}
