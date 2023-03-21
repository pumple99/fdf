/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:49:25 by seunghoy          #+#    #+#             */
/*   Updated: 2023/03/21 20:51:30 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_open_fd(char *path, int fd)
{
	if (fd != -1)
		return ;
	perr_exit("err at reading .fdf file", 1);
}