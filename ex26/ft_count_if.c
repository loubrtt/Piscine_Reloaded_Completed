/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:42:58 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/06 14:14:28 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	number;
	int	i;

	number = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			number++;
			i++;
		}
		else
			i++;
	}
	return (number);
}