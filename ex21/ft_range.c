/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:02:41 by trobbin           #+#    #+#             */
/*   Updated: 2019/09/11 23:51:32 by trobbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *array;
	int *temp;

	if (min >= max)
		return (NULL);
	array = (int*)malloc(sizeof(*array) * (max - min));
	if (!array)
		return (NULL);
	temp = array;
	while (min < max)
		*array++ = min++;
	return (temp);
}
