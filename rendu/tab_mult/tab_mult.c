/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 23:03:53 by codespace         #+#    #+#             */
/*   Updated: 2025/02/09 00:42:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void tab_mult(int number_mult)
{
    char number_to_show[10];
    char number_to_show_number_mult[10];
    int multiplied;
    char multiplied_to_show;
    int number_multiplied;
    int tmp_number_mult;
    int i;
    int j;
    
    multiplied = 1;
    while (multiplied <= 9)
    {
        i = 0;
        j = 0;
        number_multiplied = number_mult * multiplied;
        while (number_multiplied > 0)
        {
            number_to_show[i] = (number_multiplied % 10) + '0';
            number_multiplied = number_multiplied / 10;
            i++;
        }
        i = i - 1;
        multiplied_to_show = multiplied + '0';
        write(1, &multiplied_to_show, 1);
        write(1, " x ", 3);
        tmp_number_mult = number_mult;
        while (tmp_number_mult > 0)
        {
            number_to_show_number_mult[j] = (tmp_number_mult % 10) + '0';
            tmp_number_mult = tmp_number_mult / 10;
            j++;
        }
        j = j - 1;
        while (j >= 0)
        {
            write(1, &number_to_show_number_mult[j], 1);
            j--;
        }
        if (number_mult == 0)
        {
            write(1, "0", 1);
        }
        write(1, " = ", 3);
        while (i >= 0)
        {
            write(1, &number_to_show[i], 1);
            i--;
        }
        if (number_mult == 0)
        {
            write(1, "0", 1);
        }
        write(1, "\n", 1);
        multiplied++;
    }
}

int main(int argc, char **argv)
{
    int sign = 1;
    int result = 0;
    int i;

    i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while(argv[1][i] == ' ' || (argv[1][i] >= 7 && argv[1][i] <= 13))
        i++;
    if (argv[1][i] == '-' || argv[1][i] == '+')
    {
        if (argv[1][i] == '-')
            sign = -1;
        i++;
    }
    while(argv[1][i] >= '0' && argv[1][i] <= '9')
    {
        result = (result * 10) + (argv[1][i] - '0');
        i++;
    }
    result = result * sign;
    tab_mult(result);
    return (0);
}