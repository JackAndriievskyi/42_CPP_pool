// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 14:49:38 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 14:55:01 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#pragma once
#include <string>

#define DISP_CNT 2

typedef struct s_dispatch t_dispatch;

class Logger
{
	private:
		static t_dispatch	_outs[];
		static int			_out_nbr;

		std::string			_out_file;

		std::string		makeLogEntry(std::string const &);
		void			logToConsole(std::string const &);
		void			logToFile(std::string const &);

	public:
		Logger(std::string const &out_file);
		~Logger(void);

		void			log(std::string const &, std::string const &);
};

struct s_dispatch
{
	std::string		name;
	void			(Logger::*func)(std::string const &);
};
