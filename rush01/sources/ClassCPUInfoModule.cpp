// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassCPUInfoModule.cpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:24:34 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:24:35 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "ClassCPUInfoModule.hpp"

#include <string>
#include <iomanip>
#include <sys/types.h>
#include <sys/sysctl.h>
#include <sstream>
#include <mach/mach_init.h>
#include <mach/mach_error.h>
#include <mach/mach_host.h>
#include <mach/vm_map.h>
#include <unistd.h>

size_t 	CPUInfo::_prevTotalTicks = 0;
size_t 	CPUInfo::_prevIdleTicks = 0;

CPUInfo::CPUInfo() : _size(4) {

	std::string ret;
    char cpu_info[128];
    int	cores_nb;
    size_t size_info = sizeof(cpu_info);
    size_t size_cores = sizeof(cores_nb);

    sysctlbyname("machdep.cpu.brand_string", &cpu_info, &size_info, NULL, 0);
    sysctlbyname("hw.ncpu", &cores_nb, &size_cores, NULL, 0);
    std::string tmp;
    tmp = cpu_info;
    std::string cpu_model = tmp.substr (0,29);
    std::string cpu_clockspeed = tmp.substr (30,9);;
	this->_data[0] = std::string("CPU model: ") + cpu_model;
	this->_data[1] = std::string("CPU cores: ") + std::to_string(cores_nb);
	this->_data[2] = std::string("CPU clockspeed: ") + cpu_clockspeed;
	updateInfo();

}

CPUInfo::~CPUInfo() {

}


CPUInfo::CPUInfo(const CPUInfo & other) {

	*this = other;

}

CPUInfo & CPUInfo::operator=(const CPUInfo & other) {

	this->_data[0] = other._data[0];
	this->_data[1] = other._data[1];
	this->_data[2] = other._data[2];
	this->_size = other._size;
	return *this;

}



size_t				CPUInfo::getSize() const {

	return this->_size;

}

std::string const *	CPUInfo::getInfo() const {

	return _data;

}

void				CPUInfo::updateInfo() {
	std::string	load_level;

	usleep(70000);
	load_level = toString(GetCPULoad() * 100);
	this->_data[3] = std::string("CPU usage: ") + load_level + "%";
}



std::string 		CPUInfo::toString(size_t nbr) const {

	std::stringstream	ss;

	ss << nbr;
	return ss.str();
}

std::string 		CPUInfo::toString(float nbr) const {

	std::stringstream	ss(std::stringstream::in | std::stringstream::out);

	ss << std::setprecision(4) << nbr;
	return ss.str();
}

float CPUInfo::GetCPULoad()
{
   host_cpu_load_info_data_t cpuinfo;
   mach_msg_type_number_t count = HOST_CPU_LOAD_INFO_COUNT;
   if (host_statistics(mach_host_self(), HOST_CPU_LOAD_INFO, (host_info_t)&cpuinfo, &count) == KERN_SUCCESS)
   {
      size_t totalTicks = 0;
      for(int i=0; i< CPU_STATE_MAX; i++) totalTicks += cpuinfo.cpu_ticks[i];
      return CalculateCPULoad(cpuinfo.cpu_ticks[CPU_STATE_IDLE], totalTicks);
   }
   else return -1.0f;
}

float CPUInfo::CalculateCPULoad(size_t idleTicks, size_t totalTicks)
{
  size_t totalTicksSinceLastTime = totalTicks-_prevTotalTicks;
  size_t idleTicksSinceLastTime  = idleTicks-_prevIdleTicks;
  float ret = 1.0f-((totalTicksSinceLastTime > 0) ? ((float)idleTicksSinceLastTime)/totalTicksSinceLastTime : 0);
  _prevTotalTicks = totalTicks;
  _prevIdleTicks  = idleTicks;
  return ret;
}