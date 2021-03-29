/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasuh <jasuh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:12:36 by jasuh             #+#    #+#             */
/*   Updated: 2021/03/29 21:43:41 by jasuh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_len;
char	g_buf[10];

void	rec(int prev, int n)
{
	int i;

	if (n == g_len)
	{
		write(1, g_buf, g_len);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - g_len + n)
	{
		g_buf[n] = '0' + i;
		rec(i, n + 1);
	}
}

void	print_last(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	g_len = n;
	while (i < 10 - n)
	{
		g_buf[0] = '0' + i;
		rec(i++, 1);
	}
	print_last(i);
}

int	main(void)
{
	rec(1, 8);
	return (0);
}
