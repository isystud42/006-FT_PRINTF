/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 02:47:21 by isy               #+#    #+#             */
/*   Updated: 2016/11/28 13:04:04 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memory_string(char *origin, size_t size)
{
	char	*new;

	new = ft_strdup(origin);
	free(origin);
	origin = (char *)malloc(sizeof(char) * (size + 1));
	ft_strncpy(origin, new, size);
	free(new);
	return (origin);
}
