/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasuh <jasuh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:59:33 by jasuh             #+#    #+#             */
/*   Updated: 2021/03/29 17:07:20 by jasuh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(int nb)
{	
	char ch;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
		nb *= -1;
	if (nb == 0)
		return ;
	rec(nb / 10);
	ch =nb % 10 + '0';
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	rec(nb);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-0);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	return (0);
}
