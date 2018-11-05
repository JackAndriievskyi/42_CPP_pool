// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassIMonitorModule.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/13 15:07:22 by yandriie          #+#    #+#             //
//   Updated: 2018/10/13 15:07:22 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include <string>

class IMonitor
{

public:

	virtual ~IMonitor() {}

	virtual size_t				getSize() const = 0;
	virtual std::string const *	getInfo() const = 0;
	virtual void				updateInfo() = 0;

};