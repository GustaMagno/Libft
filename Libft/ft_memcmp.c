/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:40:00 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/23 14:13:36 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
	{
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
