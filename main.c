/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htizi <htizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:30:20 by htizi             #+#    #+#             */
/*   Updated: 2021/08/20 01:09:20 by htizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **env)
{
	t_tab	var;

	if (argc < 5)
	{
		ft_putstr_fd("usage: ./pipex [file1] [cmd1] [cmd2] file2\n", 1);
		return (1);
	}
	first_fork(argv, env, &var);
	last_fork(argv, env, &var);
	return (0);
}
