/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:24:13 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/09 21:59:21 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex03/ft_strncat.c"

int	main(void)
{
	char	dest[] = "000000000000000000000000";
	char	dest2[] = "000000000000000000000000";
	char	src[] = "abcdef0";

	dest[3] = 0;
	dest2[3] = 0;
	src[6] = 0;
	printf("src %s, dest %s, max len %d", src, dest, 3);
	printf(", output %s, strcat %s", ft_strncat(dest, src, 3), strncat(dest2, src, 3));
}
