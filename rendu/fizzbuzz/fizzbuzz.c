/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:18:57 by codespace         #+#    #+#             */
/*   Updated: 2025/02/09 18:41:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr(int i)
{
    int j;
    char fizzbuzz[10];
    
    j = 0;
    while(i > 0)
    {
        fizzbuzz[j] = (i % 10) + '0';
        i = i / 10;
        j++;
    }
    j = j - 1;
    while (j >= 0)
    {
        write(1, &fizzbuzz[j], 1);
        j--;
    }
}

void fizzbuzz()
{
    int i;

    i = 1;
    while (i <=  100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz" , 4);
        else
            putnbr(i);
        write(1, "\n", 1);
        i++;
    }   
}

int main(void)
{
    fizzbuzz();
    return (0);
}