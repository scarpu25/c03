/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:34:15 by enucci            #+#    #+#             */
/*   Updated: 2025/10/27 15:34:19 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0') 
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
		i++;
	}
		return 0;
}

int main ()
{
	char s1[] = "\201";
	char s2[] = "A";
	char result;
	
	result = ft_strcmp (s1, s2);
	printf("risultato: %d", result);
	
	
	/*int result = ft_strcmp (s1, s2);
	
	if (result < 0)
	printf("%s maggiore di %s\n", s1, s2);
	
	else if (result > 0)
	printf("%s minore di %s\n", s1, s2);
	
	else 
	printf("%s uguale a %s\n", s1, s2);*/
}
