/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:02:52 by itieu             #+#    #+#             */
/*   Updated: 2020/10/10 10:09:51 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

