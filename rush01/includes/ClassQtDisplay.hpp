// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassQtDisplay.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 14:32:45 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 14:32:46 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorDisplay.hpp"

class QtDisplay : public IMonitorDisplay
{

public:

	QtDisplay();
	~QtDisplay();

	QtDisplay(const QtDisplay &);
	QtDisplay & operator=(const QtDisplay &);

	void		Display() const;

private:

	IMonitorModule *	_data;

};