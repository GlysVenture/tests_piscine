/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:13:42 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/08 15:13:47 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex07/ft_strupcase.c"

int	main(void)
{
	char	c[42];

	while(1)
	{
		scanf("%s", c);
		printf("upcased : %s\n", ft_strupcase(c));
	}
	return (0);
}
