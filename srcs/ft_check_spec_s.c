/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spec_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:27:28 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/17 20:00:16 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/srcs.h"

int ft_check_spec_s(char spec, va_list args)
{
	char *str;

	if (spec == 's')
	{
		str = va_arg(args, char *);
		ft_putstr(str);
		return (ft_strlen(str));
	}
	return (ft_check_spec_p(spec, args));
}
