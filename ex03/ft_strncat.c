/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:41:56 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/03 12:41:57 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			c;
	unsigned int	i;
	unsigned int	l;

	l = 0;
	while (dest[l])
		l++;
	i = 0;
	while (1)
	{
		c = src[i];
		dest[l + i] = c;
		if (c == '\0')
			break ;
		if (i == nb - 1)
			break ;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest1[16] = "hello";
// 	char	dest2[16] = "hello";
// 	char	src[] = " world";

// 	printf("%s\n", ft_strncat(dest1, src, 12));
// 	printf("%s\n", strncat(dest2, src, 12));
// 	return (0);
// }
