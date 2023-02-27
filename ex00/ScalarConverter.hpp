/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:07:22 by tkong             #+#    #+#             */
/*   Updated: 2023/02/27 16:22:24 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>

#define NONE__ 0
#define CHR__ 1
#define INT__ 2
#define FLT__ 3
#define DBL__ 4
#define ERR__ 5

class ScalarConverter {

public:
	static int detectType(std::string& arg);
	template <class T> static T convert(std::string arg) {
		T rtn;
		std::istringstream(arg) >> rtn;
		return rtn;
	}
	template <class T> static std::string format(T arg, int type) {
		std::stringstream ss;
		ss << arg;
		std::string rtn, val;
		ss >> val;
		switch (type) {
			case CHR__:
				rtn = '\'' + val + '\'';
				break;
			case INT__:
				rtn = val;
				break;
			case FLT__:
				rtn = val;
				rtn += (val.find(".") == std::string::npos
						&& val != "inf"
						&& val != "nan" ? ".0f" : "f");
				break;
			case DBL__:
				rtn = val;
				rtn += (val.find(".") == std::string::npos
						&& val != "inf"
						&& val != "nan" ? ".0" : "");
				break;
			case ERR__:
				rtn = "impossible";
				break;
			default:
				rtn = "Non displayable";
				break;
		}
		return rtn;
	}

};

#endif
