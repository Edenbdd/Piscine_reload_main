/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eden <eden@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:54:23 by eden              #+#    #+#             */
/*   Updated: 2024/01/06 19:01:25 by eden             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int nb;
    int *nbr;
    nbr = &nb;
    ft_ft(nbr);
    printf("%d", nb);
    printf("%d", *nbr);
    return (0);
}