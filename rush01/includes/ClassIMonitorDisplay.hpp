// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassIMonitorDisplay.hpp                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 14:31:46 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 14:31:47 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorModule.hpp"

class IMonitorDisplay
{

public:
	virtual ~IMonitorDisplay() {}

	virtual void		Display() const = 0;

};