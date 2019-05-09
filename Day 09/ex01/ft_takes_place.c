/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 22:20:16 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/01 23:05:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if ((hour >= 0 && hour < 12) || hour == 24)
	{
		if (hour == 11)
			printf("%i.00 A.M. AND %i.00 P.M.\n", hour, 12);
		else if (hour == 24)
			printf("%i.00 A.M. AND %i.00 A.M.\n", 0, 1);
		else
			printf("%i.00 A.M. AND %i.00 A.M.\n", hour, hour + 1);
	}
	else
	{
		if (hour == 23)
			printf("%i.00 P.M. AND %i.00 A.M.\n", hour, 0);
		else
			printf("%i.00 P.M. AND %i.00 P.M.\n", hour, hour + 1);
	}
}
