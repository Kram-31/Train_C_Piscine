#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int  *a, int  *b)
{
	int temp = *a;
	*a = *a / *b;
	*b = temp % *a;
}

int main(void)
{
	int num1 = 17;
	int num2 = 5; 

	printf("Avant l'appel: a = %d, b = %d\n", num1, num2);

	ft_ultimate_div_mod(&num1, &num2);
      	printf("Après l'appel: a = %d, b = %d\n", num1, num2);
	return (0);
}


