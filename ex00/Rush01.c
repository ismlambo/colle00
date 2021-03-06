/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:44:51 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/15 15:45:13 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


int rush(int x, int y)
{
    int i;
    int j;

    i=1;
    while( i<=y)
    {
        j=1;
        while( j<=x)
        {
            if(i == y && j == 1)
            {
                ft_putchar('\\');
            }
            else if(i == y && j == x)
            {
                ft_putchar('/');
            }
            else if(i == 1 && j == x)
            {
                ft_putchar('\\');
            }
            else if(i == 1 && j == 1)
            {
                ft_putchar('/');
            }
            else if(i == 1 || i == y )
            {
                ft_putchar('*');
            }
            else if( j == 1 || j == x)
            {
                ft_putchar('*');
            }
            else      
            {
                ft_putchar(' ');
            }
            j++;
        }
        ft_putchar('\n');
        i++;
    }
    return(0);
}
