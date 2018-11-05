// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassTimeInfoModule.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:24:15 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:24:16 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorModule.hpp"
#include <string>

class TimeInfo : public IMonitor
{

public:

	TimeInfo();
	~TimeInfo();

	TimeInfo(const TimeInfo &);
	TimeInfo & operator=(const TimeInfo &);

	size_t				getSize() const;
	std::string const *	getInfo() const;
	void				updateInfo();

private:

	std::string		_data[1];
	size_t			_size;

};