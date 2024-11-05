#include <unistd.h>

int ft_putchar(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		write(1,&n,1);
		n++;
	}
}

