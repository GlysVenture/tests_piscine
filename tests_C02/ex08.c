/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:13:52 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/08 15:13:55 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex08/ft_strlowcase.c"

int	main(void)
{
	char	c[42];

	while(1)
	{
		scanf("%s", c);
		printf("lowcased : %s\n", ft_strlowcase(c));
	}
	return (0);
}
