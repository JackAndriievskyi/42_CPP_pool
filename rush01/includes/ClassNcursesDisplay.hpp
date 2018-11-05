// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassNcursesDisplay.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 14:32:34 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 14:32:35 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassIMonitorDisplay.hpp"

class NcursesDisplay : public IMonitorDisplay
{

public:

	NcursesDisplay();
	~NcursesDisplay();

	NcursesDisplay(const NcursesDisplay &);
	NcursesDisplay & operator=(const NcursesDisplay &);

	void		Display() const;

};