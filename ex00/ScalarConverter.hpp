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

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &rhs);

public:
	static int detectType(std::string &arg);
	template <class T> static T convert(std::string arg) {
		T rtn;
		std::istringstream(arg) >> rtn;
		return rtn;
	}
	template <class T> static std::string format(T arg, int type) {
		std::stringstream ss;
		ss << arg;
		std::string val;
		ss >> val;
		switch (type) {
			case CHR__:
				val = '\'' + val + '\'';
				break;
			case INT__: break;
			case FLT__:
				val += (val.find(".") == std::string::npos
						&& val.find("inf") == std::string::npos
						&& val.find("nan") == std::string::npos ? ".0f" : "f");
				break;
			case DBL__:
				val += (val.find(".") == std::string::npos
						&& val.find("inf") == std::string::npos
						&& val.find("nan") == std::string::npos ? ".0" : "");
				break;
			case ERR__:
				val = "impossible";
				break;
			default:
				val = "Non displayable";
				break;
		}
		return val;
	}

};

#endif
