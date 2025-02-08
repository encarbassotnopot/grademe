/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:37:37 by codespace         #+#    #+#             */
/*   Updated: 2025/02/08 23:01:03 by codespace        ###   ########.fr       */
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
    destiny = malloc(sizeof(char) * str_len);
    if (!destiny)
        return NULL;
    while (src[i])
    {
        destiny[i] = src[i];
        i++;
    }
    destiny[i] = '\0';
    return (destiny);
}
