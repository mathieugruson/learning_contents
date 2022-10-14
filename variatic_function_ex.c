/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:14:36 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/22 14:35:27 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdarg.h>

void print_ints(int num, ...)
{
	va_list	args;
	int i;
	int value;
	
	i = 0;
	value = 0;
	va_start(args, num);
	while(i < num)
	{
		value = va_arg(args, int);
		printf("%d : %d\n", i, value);
		i++;	
	}
	va_end(args);
}

int main()
{
	print_ints(3, 24, 26, 312);
	print_ints(2, 256, 512);

	return 0;
}