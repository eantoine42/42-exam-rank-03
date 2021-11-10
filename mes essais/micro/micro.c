/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eantoine <eantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 01:39:53 by eantoine          #+#    #+#             */
/*   Updated: 2021/11/10 01:55:08 by eantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ERRARG "Error: argument\n"
#define ERRFILE "Error: Operation file corrupted"

int	ft_strlen(char *msg)
{
	int i;

	i = 0;
	while (msg[i])
		i++;
	return (i);
}

int error_msg (char *msg, int renvoi)
{
	write (1, msg, ft_strlen(msg));
	return (renvoi);
}

int main (int ac, char **av)
{
	if (ac != 2)
		return (error_msg(ERRARG, 1));

	
}