/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:24:13 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/09 21:43:36 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex02/ft_strcat.c"

int	main(void)
{
	char	dest[] = "000000000000000000000000000000000000";
	char	dest2[] = "000000000000000000000000000000000000";
	char	src[] = "abcdef0";

	dest[10] = 0;
	dest2[10] = 0;
	src[6] = 0;
	printf("src %s, dest %s", src, dest);
	printf(", output %s, strcat %s", ft_strcat(dest, src), strcat(dest2, src));
}
