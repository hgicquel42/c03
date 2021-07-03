/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:19:24 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/03 11:19:27 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char			c1;
	char			c2;
	unsigned int	i;

	i = 0;
	while (1)
	{
		if (i == n)
			return (0);
		c1 = s1[i];
		c2 = s2[i];
		if (c1 == '\0')
			return (0);
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
}

// int main(void)
// {
//     char    s1[] = "hella";
//     char    s2[] = "hello";

//     int     n = ft_strncmp(s1, s2, 0);
//     printf("%d\n", n);
//     return (0);
// }