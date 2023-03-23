/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:42:12 by seunghoy          #+#    #+#             */
/*   Updated: 2023/03/21 21:03:48 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

//error_exit.c
int		err_exit(char *str);
int		perr_exit(char *str, int exit_status);

//check_err.c
void	check_open_fd(char *path, int fd);
char	*check_gnl(char *gnl_line);

#endif