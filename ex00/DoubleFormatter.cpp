/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoubleFormatter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:27:40 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 04:00:35 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DoubleFormatter.hpp"

DoubleFormatter::DoubleFormatter() : AFormatter() {}
DoubleFormatter::DoubleFormatter(const DoubleFormatter& rhs) { *this = rhs; }
DoubleFormatter::DoubleFormatter(const std::string& value) : AFormatter(value) {}
DoubleFormatter::~DoubleFormatter() {}
DoubleFormatter& DoubleFormatter::operator=(const DoubleFormatter& rhs) {
	if (this == &rhs) {
		return *this;
	}
	*dynamic_cast<AFormatter*>(this) = *dynamic_cast<const AFormatter*>(&rhs);
	return *this;
}

std::string DoubleFormatter::format() const {
	std::string rtn;
	try {
		double val = std::stod(this->getValue());
		rtn = std::to_string(val);
		while (rtn.back() == '0') {
			rtn.pop_back();
		}
		if (rtn.back() == '.') {
			rtn += '0';
		}
	} catch (...) {
		rtn = "impossible";
	}
	return rtn;
}
