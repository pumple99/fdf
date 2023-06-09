/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:49:25 by seunghoy          #+#    #+#             */
/*   Updated: 2023/03/21 21:00:41 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_open_fd(char *path, int fd)
{
	if (fd != -1)
		return ;
	perr_exit("open error at reading .fdf file", 1);
}

char	*check_gnl(char *gnl_line)
{
	if (gnl_line == (char *)1)
	{
		perr_exit("gnl error at reading .fdf file", 1);
		return (0);
	}
	return (gnl_line);
}