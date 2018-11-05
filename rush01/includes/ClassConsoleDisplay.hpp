// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ConsoleDisplay.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 14:31:59 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 14:32:00 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorDisplay.hpp"

class ConsoleDisplay : public IMonitorDisplay
{

public:

	ConsoleDisplay();
	~ConsoleDisplay();

	ConsoleDisplay(const ConsoleDisplay &);
	ConsoleDisplay & operator=(const ConsoleDisplay &);

	void		Display() const;

};