/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekavak <ekavak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:42:35 by ekavak           #+#    #+#             */
/*   Updated: 2023/02/05 08:41:58 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	var_y;
	int	var_x;

	var_y = 1;
	while (var_y <= y)
	{
		var_x = 1;
		while (var_x <= x)
		{
			if ((var_x == 1 || var_x == x) && (var_y == 1 || var_y == y))
				ft_putchar('o');
			else if (var_x < x && (var_y == 1 || var_y == y))
				ft_putchar('-');
			else if ((var_x == 1 || var_x == x) && var_y < y)
				ft_putchar('|');
			else
				ft_putchar(' ');
			var_x++;
		}
		var_y++;
		ft_putchar('\n');
	}
}
