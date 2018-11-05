// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   eval_expr.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/05 11:45:57 by yandriie          #+#    #+#             //
//   Updated: 2018/11/05 11:46:37 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "Fixed.class.hpp"

void	mathExpr(std::string expr) {

}

int		main(int argc, char **argv) {

	for (int i = 1; i < argc; i++)
		mathExpr(argv[i]);

	return 0;

}