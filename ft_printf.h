/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:43:08 by iklimov           #+#    #+#             */
/*   Updated: 2020/02/05 20:33:03 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

typedef struct	s_bag
{
	bool		number_sign;
	bool		zero;
	bool		minus;
	bool		plus;
	bool		space;
	bool		period;
	int			width;
	int			precision;
	char		*length_modifier;
	char		format_conversion;
}				t_bag;
