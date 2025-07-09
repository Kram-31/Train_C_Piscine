/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:02:27 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/09 17:54:21 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit_char;

	digit_char = '0';
	while (digit_char <= '9')
	{
		write(1, &digit_char, 1);
		digit_char ++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
