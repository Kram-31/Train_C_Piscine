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
#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
	char letter;
	char letter_end;

	letter= 'z';
	letter_end= 'a';
	while (letter==letter_end)
	{
		putchar(letter);
		letter ++;
	}
	putchar('\n');
	return ;
}

int main(void)
{
	ft_print_reverse_alphabet();
}

