/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:23:47 by aubertra          #+#    #+#             */
/*   Updated: 2024/01/19 15:50:10 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == 2147483647)
    {
        write(1, "2147483647", 11);
        return ;
    }
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb >= 0 && nb < 10)
        ft_putchar(nb + 48);
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

void    ft_foreach(int *tab, int length, void (*f)(int))
{
    int count;

    count = 0;
    while (count < length)
    {
        (*f)(tab[count]);
        count++;
    }
}


int main(void)
{
    int length;

    int tab[] = {1, 2, 3, 4, 5};
    length = 5;
    ft_foreach(tab, length, &ft_putnbr);
    return (0);
}
