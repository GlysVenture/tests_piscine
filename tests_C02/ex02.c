/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:03:45 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/08 15:03:53 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex02/ft_str_is_alpha.c"

int	main(void)
{
	char	c[42];

	while(1)
	{
		scanf("%s", c);
		printf("is alpha ? : %d\n", ft_str_is_alpha(c));
	}
	return (0);
}
