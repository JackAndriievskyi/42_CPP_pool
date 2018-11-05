// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassNetInfoModule.hpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 15:09:19 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 15:09:19 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorModule.hpp"
#include <string>

class NetInfo : public IMonitor
{

public:

	NetInfo();
	~NetInfo();

	NetInfo(const NetInfo &);
	NetInfo & operator=(const NetInfo &);

	size_t				getSize() const;
	std::string const *	getInfo() const;
	void				updateInfo();

private:

	std::string		_data[1];
	size_t			_size;

};