// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassOsInfoModule.hpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:24:04 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:24:05 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorModule.hpp"
#include <string>

class OsInfo : public IMonitor
{

public:

	OsInfo();
	~OsInfo();

	OsInfo(const OsInfo &);
	OsInfo & operator=(const OsInfo &);

	size_t				getSize() const;
	std::string const *	getInfo() const;
	void				updateInfo();

private:

	std::string		_data[4];
	size_t			_size;

};