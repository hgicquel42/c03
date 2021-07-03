/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 10:45:45 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/03 10:45:47 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	char	c1;
	char	c2;
	int		i;

	i = 0;
	while (1)
	{
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

//     int     n = ft_strcmp(s1, s2);
//     printf("%d\n", n);
//     return (0);
// }