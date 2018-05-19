/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 22:38:36 by chmannin          #+#    #+#             */
/*   Updated: 2018/05/18 22:43:47 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int numerator;
	int denominator;

	numerator = *a;
	denominator = *b;
	*a = numerator / denominator;
	*b = numerator % denominator;
}
