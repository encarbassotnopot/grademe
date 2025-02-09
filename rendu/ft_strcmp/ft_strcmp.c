/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:43:12 by codespace         #+#    #+#             */
/*   Updated: 2025/02/09 18:56:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>


int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;   
    while (s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return (0);
}

// int main (void)
// {
//     printf("%d\n", strcmp("abc", "abc\0def"));
//     printf("%d\n", ft_strcmp("abc", "abc\0def"));     
//     printf("%d\n", ft_strcmp("\t", " "));
//     printf("%d\n", strcmp("\t", " "));
//     printf("%d\n", ft_strcmp("\x7F", "\x80"));
//     printf("%d\n", strcmp("\x7F", "\x80"));  
//     return (0);
// }