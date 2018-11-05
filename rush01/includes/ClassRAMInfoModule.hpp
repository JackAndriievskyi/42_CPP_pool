// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassRAMInfoModule.hpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:24:50 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:24:50 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorModule.hpp"
#include <string>

class RAMInfo : public IMonitor
{

public:

	RAMInfo();
	~RAMInfo();

	RAMInfo(const RAMInfo &);
	RAMInfo & operator=(const RAMInfo &);

	size_t				getSize() const;
	std::string const *	getInfo() const;
	void				updateInfo();

private:

	std::string		_data[3];
	size_t			_size;

	std::string 	toString(size_t) const;

};