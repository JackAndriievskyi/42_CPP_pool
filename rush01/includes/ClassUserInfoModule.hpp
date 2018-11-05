// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassUserInfoModule.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:22:50 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:22:51 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorModule.hpp"
#include <string>

class UserInfo : public IMonitor
{

public:

	UserInfo();
	~UserInfo();

	UserInfo(const UserInfo &);
	UserInfo & operator=(const UserInfo &);

	size_t				getSize() const;
	std::string const *	getInfo() const;
	void				updateInfo();

private:

	std::string		_data[2];
	size_t			_size;

};