/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 13:35:42 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/03 13:35:43 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "hello world";

// 	printf("%s\n", ft_strstr(str, "aaa"));
// 	printf("%s\n", strstr(str, "aaa"));
// }