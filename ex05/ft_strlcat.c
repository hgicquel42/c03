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

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	while (dest[l])
		l++;
	i = 0;
	while (l + i < size - 1)
	{
		dest[l + i] = src[i];
		i++;
	}
	if (size)
		dest[l + i] = '\0';
	i = 0;
	while (dest[i])
		i++;
	return (l + i);
}

// int main(void)
// {
//     char    dest1[] = "hello";
//     char    dest2[] = "hello";
//     char    src[] = "";

//     int n1 = ft_strlcat(dest1, src, 12);
//     printf("%s %d\n", dest1, n1);
//     int n2 = ft_strlcat(dest2, src, 12);
//     printf("%s %d\n", dest2, n2);
//     return (0);
// }