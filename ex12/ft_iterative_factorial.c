/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eden <eden@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:16:07 by aubertra          #+#    #+#             */
/*   Updated: 2024/01/06 19:31:36 by eden             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int count;
    count = nb;
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    while (count > 1)
    {
        count--;
        nb = nb * count;
    }
    return (nb);
}

int main(void)
{
    int n;
    n = ft_iterative_factorial(5);
    printf("%d\n", n);
    n = ft_iterative_factorial(-5);
    printf("%d\n", n);
    n = ft_iterative_factorial(0);
    printf("%d\n", n);
    return (0);
}