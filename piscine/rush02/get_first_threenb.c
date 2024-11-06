/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_first_threenb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:37:43 by bjaparid          #+#    #+#             */
/*   Updated: 2024/07/17 10:12:54 by bjaparid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "write.c"
#include "ft_0to9.c"

void printlastversion(int sizeofnumber);
void	ft_0to9(int nb);
void	putstr(char *str);
int     ft_strlen(char *str)
{
        int    i;

        i = 0;
        while (str[i])
        {
                i++;
        }
        return (i);
}

long long    ft_recursive_power(long long nb, int power)
{
        if (power < 0)
                return (0);
        else if (power == 0)
                return (1);
        else
        {
                nb = nb * ft_recursive_power(nb, --power);
        }
        return (nb);
}

int get_first_three(long long nb,int sizeofnumber)
{
    long long firstnumber;
    
    firstnumber = nb;
        if (sizeofnumber % 3 == 0)
                nb = nb / ft_recursive_power(10,(sizeofnumber-3));
        else 
                nb = nb / ft_recursive_power(10,(sizeofnumber-(sizeofnumber%3)));
        if (firstnumber < 1000)
                ft_0to9(firstnumber);
        else 
        {
                ft_0to9(nb);
                printlastversion(sizeofnumber);
                if (firstnumber > 1000 && sizeofnumber % 3 == 0)
                get_first_three(firstnumber%ft_recursive_power(10,sizeofnumber-3),sizeofnumber - 3);
                else 
                get_first_three(firstnumber%ft_recursive_power(10,sizeofnumber-(sizeofnumber%3)),sizeofnumber - 3);
        }
       return 0;
}
void printlastversion(int sizeofnumber)
{
        thousandsandetc(sizeofnumber);
        
}



int main ()
{
    long long l;
    
    long long k =10000;
    char nb[]= "10000";
    l = strlen(nb);
    get_first_three(k,l);
}