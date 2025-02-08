/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:20:00 by codespace         #+#    #+#             */
/*   Updated: 2025/02/08 22:32:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void first_word(char **argv)
{
    int i = 0;
    while(argv[1][i])
    {
        while (argv[1][i] ==  ' ')
            i++;
        while(argv[1][i] != ' ' && argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        break;
    }
}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    first_word(argv);
    write(1, "\n", 1);
    return(0);
}