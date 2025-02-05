/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:44:56 by codespace         #+#    #+#             */
/*   Updated: 2025/02/05 01:59:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char first_half = (octet >> 4) & 0x0F; // Pega os 4 bits mais significativos
    unsigned char second_half = octet & 0x0F;       // Pega os 4 bits menos significativos

    unsigned char inverted_octet = (second_half << 4) | first_half; // Inverte as metades

    int i = (sizeof(unsigned char) * 8) - 1;
    while (i >= 0)
    {
        unsigned char bit = ((inverted_octet >> i) & 1) + '0';
        write(1, &bit, 1);
        i--;
    }
    return (octet);
}

// int main(void)
// {
//     unsigned char octet;
    
//     octet = 'A';
//     swap_bits(octet);
//     return (0);
// }