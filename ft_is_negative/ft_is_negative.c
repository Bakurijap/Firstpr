#include <unistd.h>

void ft_putchar(int n)
{
	if (n < 0) 
		write(1,"N",1);
	else 
		write(1,"P",1);
}
