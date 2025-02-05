/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:55:35 by codespace         #+#    #+#             */
/*   Updated: 2025/02/05 03:29:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rostring(char **argv)
{
    int flag;
    int i;
    
    i = 0;
    flag = 0;
    while (argv[1][i] == ' ')
        i++;
    while (argv[1][i] != ' ')
        i++;
    while (argv[1][i] == ' ')
        i++;
    while (argv[1][i])
    {
        while (argv[1][i] == ' ' && argv[1][i + 1] == ' ')
            i++;
        flag = 1;
        write(1, &argv[1][i], 1);
        i++;
    }
    i = 0;
    if (flag == 1)
        write(1, " ", 1);
    while (argv[1][i] == ' ')
    {
        i++;
    }
    while (argv[1][i] != ' ')
    {
        write(1, &argv[1][i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rostring(argv);
	write(1, "\n", 1);
	return (0);
}