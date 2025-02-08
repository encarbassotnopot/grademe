/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:37:37 by codespace         #+#    #+#             */
/*   Updated: 2025/02/08 22:47:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *destiny;
    int str_len;
    int i;

    i = 0;
    str_len = 0;
    while (src[str_len])
        str_len++;
    destiny = malloc(sizeof(char) * str_len + 1);
    while (src[i])
    {
        destiny[i] = src[i];
        write(1, &destiny[i], 1);
        i++;
    }
    destiny[i] = '\0';
    return (destiny);
}
