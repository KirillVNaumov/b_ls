/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_with_colors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaumov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:13:21 by knaumov           #+#    #+#             */
/*   Updated: 2018/10/04 15:14:56 by knaumov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

void	print_with_colors(t_node *entity)
{
	if ((entity->buf.st_mode & S_IFBLK) == S_IFBLK)
		printf("%s%s%s%s%s", CBLUE, CBBLUE, entity->name, CBBLACK, CWHITE);
	else if ((entity->buf.st_mode & S_IFDIR) == S_IFDIR)
		printf("%s%s", CBLUE, entity->name);
	else if ((entity->buf.st_mode & S_IFLNK) == S_IFLNK)
		printf("%s%s", CPINK, entity->name);
	else if ((entity->buf.st_mode & S_IXUSR) == S_IXUSR)
		printf("%s%s", CRED, entity->name);
	else if ((entity->buf.st_mode & S_IFCHR) == S_IFCHR)
		printf("%s%s%s%s%s", CBLUE, CBYELLOW, entity->name, CBBLACK, CWHITE);
	else
		printf("%s%s", CWHITE, entity->name);
}
