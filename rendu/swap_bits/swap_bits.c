/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:44:56 by codespace         #+#    #+#             */
/*   Updated: 2025/02/05 00:38:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char last_part;
    unsigned char first_part;
    int i = 3;
    int j = sizeof(unsigned char) * 8 - 1;

    while (j >= 4)
    {
        last_part = (((octet >> i) & 1) + '0');
        first_part = (((octet >> j) & 1) + '0');
        i--;
        j--;
    }
    i = 3;
    while (i >= 0)
    {
        octet = (((last_part >> i) & 1) + '0');
         i--;
    }
    i = 7;
    while (i >= 4)
    {
        octet = (((first_part >> i) & 1) + '0');
        i--;
    }
    return (octet);
}

// int main(void)
// {
//     unsigned char octet;
    
//     octet = '1';
//     swap_bits(octet);
//     return (0);
// }