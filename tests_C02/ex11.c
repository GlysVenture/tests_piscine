/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:48:26 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/09 20:55:10 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex11/ft_putstr_non_printable.c"

int	main(void)
{
	char	c[] = "/n: | 14: | 127: | -80: ";

	c[3] = '\n';
	c[9] = 14;
	c[16] = 127;
	c[23] = -80;
	printf("%s\n ------ \n", c);
	ft_putstr_non_printable(c);
	printf(" should be b0\n");
	return (0);
}
