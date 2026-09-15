/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduman <dduman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 17:49:40 by dduman            #+#    #+#             */
/*   Updated: 2026/09/15 13:15:50 by dduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	number;
	int	i;

	i = 1;
	number = nb;
	while (i < power)
	{
		number = (number * nb);
		i++;
	}
	return (number);
}
