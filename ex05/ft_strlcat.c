/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 09:28:15 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/04 09:28:16 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	while (dest[l] && l < size)
		l++;
	i = 0;
	while (src[i] && size && l + i < size - 1)
	{
		dest[l + i] = src[i];
		i++;
	}
	if (l < size)
		dest[l + i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (l + i);
}
