/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduman <dduman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:21:26 by dduman            #+#    #+#             */
/*   Updated: 2026/09/12 00:48:21 by dduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ret;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	ret = i;
	while (src[j])
		j++;
	ret += j;
	if (i == size || size < i)
		return (size + j);
	j = 0;
	while (src[j] != '\0' && (i + j < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ret);
}
