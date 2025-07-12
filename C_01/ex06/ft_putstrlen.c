#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	
	if (nb >=  10)
	{
		ft_putnbr(nb / 10);
	}
	
	ft_putchar(nb % 10 + '0');
}
int	ft_putstrlen(char *str)
{
	int len = 0;
	while  (str[len] != '\0')
	{
		len++;
	}
	ft_putnbr(len);
	ft_putchar('\n');
	return len;
}

int main (void)
{
	ft_putstrlen("kakakaka");
	return (0);
}

