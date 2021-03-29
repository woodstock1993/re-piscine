/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasuh <jasuh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:48:52 by jasuh             #+#    #+#             */
/*   Updated: 2021/03/29 16:58:11 by jasuh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb_1(char *buff2)
{	
	char buff[2];

	buff[0] = buff2[0];
	buff[1] = buff2[1] + 1;
	while (buff[0] <= '9')
	{
		while (buff[1] <= '9')
		{	
			if (buff2[1] == '8')
			{
				write(1, "98 99", 5);
				return ;
			}
			write(1, buff2, 2);
			write(1, " ", 1);
			write(1, buff, 2);
			write(1, ", ", 2);
			buff[1] += 1;
		}
		buff[0] += 1;
		buff[1] = '0';
	}
}

void	ft_print_comb_2(char *buff2)
{
	while (buff2[0] <= '9')
	{
		while ('0' <= buff2[1] && buff2[1] <= '9')
		{	
			ft_print_comb_1(buff2);
			buff2[1] += 1;
		}
		buff2[1] = '0';
		buff2[0] += 1;
	}
}

void	ft_print_comb2(void)
{	
	char buff2[2];

	buff2[0] = '0';
	buff2[1] = '0';

	ft_print_comb_2(buff2);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
