/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:03:58 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/08 15:04:00 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex03/ft_str_is_numeric.c"

int	main(void)
{
	char	c[42];

	while(1)
	{
		scanf("%s", c);
		printf("is numeric ? : %d\n", ft_str_is_numeric(c));
	}
	return (0);
}
