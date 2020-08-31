/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <ciglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 01:52:46 by ciglesia          #+#    #+#             */
/*   Updated: 2020/09/01 01:53:22 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

# define N -122222232230
# define T "u"
# define W "20"
# define P ""
# define S ""

int	main()
{

	unsigned int xxx;
	char *p = "arsta";
	int r00 = 0;


	printf("|%"S"-0"W"."P""T"| %%"S"0-"W"."P"\n", N);
	printf("|%"S"0"W"."P""T"| %%"S"0"W"."P"\n", N);
	printf("|%"S"-"W"."P""T"| %%"S"-"W"."P"\n", N);
	printf("|%"S""W"."P""T"| %%"S""W"."P"\n", N);
	printf("|%"S"-0"W""T"| %%"S"0-"W"\n", N);
	printf("|%"S"0"W""T"| %%"S"0"W"\n", N);
	printf("|%"S"-"W""T"| %%"S"-"W"\n", N);
	printf("|%"S""W""T"| %%"S""W"\n", N);

	write(1,  "\e[38;2;255;0;0m", 16);

	ft_printf("|%"S"-0"W"."P""T"| %%"S"0-"W"."P"\n", N);
	ft_printf("|%"S"0"W"."P""T"| %%"S"0"W"."P"\n", N);
	ft_printf("|%"S"-"W"."P""T"| %%"S"-"W"."P"\n", N);
	ft_printf("|%"S""W"."P""T"| %%"S""W"."P"\n", N);
	ft_printf("|%"S"-0"W""T"| %%"S"0-"W"\n", N);
	ft_printf("|%"S"0"W""T"| %%"S"0"W"\n", N);
	ft_printf("|%"S"-"W""T"| %%"S"-"W"\n", N);
	ft_printf("|%"S""W""T"| %%"S""W"\n", N);

	write(1, "\e[0m", 4);
	return (0);
}
