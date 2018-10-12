/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaumov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:40:18 by knaumov           #+#    #+#             */
/*   Updated: 2018/10/01 10:40:19 by knaumov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

char	*ft_strcat(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i] != '\0')
		(res[i] = s1[i]) && i++;
	while (s2[j] != '\0')
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
