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

void  ft_putchar(char c)
 {
   write(1, &c, 1); }

void  ft_print_alphabet(void) {
  char letter;

  letter = 'a';
  while (letter < 'z') {
    ft_putchar(letter);
    letter++;
  }
  ft_putchar('\n');
  return;
}

int main(void) {
  ft_print_alphabet();
  return (0);
}
