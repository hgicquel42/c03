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
// #include <strings.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char s1[] = "Test1";
// 	char s2[] = "OK";
// 	char s3[] = "Same";
// 	char s4[] = "Size";
// 	char s5[] = "Shorter";
// 	char s6[] = "ThanMyself";

// 	printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
// 	printf("%d, %d\n", ft_strcmp(s3, s4), strcmp(s3, s4));
// 	printf("%d, %d\n", ft_strcmp(s5, s6), strcmp(s5, s6));
// 	printf("%d, %d\n", ft_strcmp(s5, s5), strcmp(s5, s5));
// }
