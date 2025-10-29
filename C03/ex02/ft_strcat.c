/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:37:43 by enucci            #+#    #+#             */
/*   Updated: 2025/10/27 21:34:02 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int a;
	
	i = 0;
	a = 0;

	while (dest[i] != '\0')
	i++;
	
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char src[] = "twin";
	char dest[] = "ciao";
	printf("%s\n", ft_strcat(dest, src));
}

