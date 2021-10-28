/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 20:48:38 by ajimenez          #+#    #+#             */
/*   Updated: 2021/10/25 16:37:45 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*stack;
	size_t	i;

	stack = (void *)malloc(num * size);
	if (!stack)
		return (0);
	i = 0;
	while (i < (num * size))
	{
		((unsigned char *)stack)[i] = '\0';
		i++;
	}
	return (stack);
}
