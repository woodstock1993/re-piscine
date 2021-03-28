/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasuh <jasuh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 04:04:04 by jasuh             #+#    #+#             */
/*   Updated: 2021/03/29 04:45:31 by jasuh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char buff[5];

	buff[0] = '0';
	buff[1] = buff[0] + 1;
	buff[2] = buff[1] + 1;
	buff[3] = ',';
	buff[4] = ' ';

	while (buff[0] <= '6')
	{
		while (buff[1] <= '8')
		{	
			while (buff[2] <= '9')
			{	
				write(1, buff, 5);
				buff[2] += 1;
			}
			buff[1] += 1;
			buff[2] = buff[1] + 1;
		}
		buff[0] += 1;
		buff[1] = buff[0] + 1;
		buff[2] = buff[1] + 1;
	}
	write(1, "789", 3);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
