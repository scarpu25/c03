/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:49:32 by enucci            #+#    #+#             */
/*   Updated: 2025/10/28 14:49:36 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int a;
	
	i = 0;
	a = 0;
	
	if (to_find[0] == '\0')
	return (str);
		
		while (str[i] != '\0')
		{
			while (str[i + a] == to_find[a] && to_find[a] != '\0')
			{
				a++;
			}
		if (to_find[a] == '\0')
		{
			return (&str[i]);
		}
			i++;
		}
	return (NULL);
}
int main()
{
	char str[] = "ciao a tutti";
	char to_find[] = "a";
	printf("%s", ft_strstr(str, to_find));
}
