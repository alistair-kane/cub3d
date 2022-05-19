/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandtn <dbrandtn@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:05:28 by dbrandtn          #+#    #+#             */
/*   Updated: 2022/01/13 15:40:36 by dbrandtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 0 && c <= 255)
	{
		if (c >= 'A' && c <= 'Z')
			return (c + 32);
	}
	return (c);
}
