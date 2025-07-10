#include <stdio.h> // a retirer apres pour la moulinette
#include <unistd.h>


void	ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int num1;
    int num2;

    num1 = 5;
    num2 = 10;

    printf("Avant l'appel à ft_swap: num1 = %d, num2 = %d\n", num1, num2);

    ft_swap(&num1, &num2);

    printf("Après l'appel à ft_swap: num1 = %d, num2 = %d\n", num1, num2);

    return (0);
}