/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:27:29 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/03 11:27:33 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	c;
	int		i;
	int		l;

	i = 0;
	while (1)
	{
		c = dest[i];
		if (c == '\0')
			break ;
		i++;
	}
	l = i;
	i = 0;
	while (1)
	{
		c = src[i];
		dest[l + i] = c;
		if (c == '\0')
			break ;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[16] = "hello";
// 	char	src[] = " world";

// 	ft_strcat(dest, src);
// 	printf("%s", dest);
// 	return (0);
// }
