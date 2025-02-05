/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:44:56 by codespace         #+#    #+#             */
/*   Updated: 2025/02/05 02:05:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char first_half = (octet >> 4) & 0x0F; // Pega os 4 bits mais significativos
    unsigned char second_half = octet & 0x0F;       // Pega os 4 bits menos significativos
    unsigned char inverted_octet = (second_half << 4) | first_half; // Inverte as metades

    return (inverted_octet);
}

// int main(void)
// {
//     unsigned char octet;
    
//     octet = 'A';
//     swap_bits(octet);
//     return (0);
// }

