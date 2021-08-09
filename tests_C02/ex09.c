/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:14:28 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/09 12:45:33 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex09/ft_strcapitalize.c"

int	main(void)
{
	char	c[] = "un test DiffERREnt_poUr 42uNe:reuSsite";

	printf("original :%s\n", c);
	printf("capitalized :%s\n", ft_strcapitalize(c));
	return (0);
}
