// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassCPUInfoModule.hpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:24:41 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:24:41 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorModule.hpp"
#include <string>

class CPUInfo : public IMonitor
{

public:

	CPUInfo();
	~CPUInfo();

	CPUInfo(const CPUInfo &);
	CPUInfo & operator=(const CPUInfo &);

	size_t				getSize() const;
	std::string const *	getInfo() const;
	void				updateInfo();

private:

	std::string		_data[4];
	size_t			_size;
	static size_t 	_prevTotalTicks;
	static size_t 	_prevIdleTicks;
	std::string 	toString(size_t) const;
	std::string 	toString(float nbr) const;
	float 			GetCPULoad();
	float			CalculateCPULoad(size_t idleTicks, size_t totalTicks);
};