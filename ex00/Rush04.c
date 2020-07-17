/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:47:42 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/15 15:47:52 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}

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
                ft_putchar('C');
            }
            else if(i == y && j == x)
            {
                ft_putchar('A');
            }
            else if(i == 1 && j == x)
            {
                ft_putchar('C');
            }
            else if(i == 1 && j == 1)
            {
                ft_putchar('A');
            }
            else if(i == 1 || i == y )
            {
                ft_putchar('B');
            }
            else if( j == 1 || j == x)
            {
                ft_putchar('B');
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

int main(void)
{
    rush(6, 3);
    return(0);
}
